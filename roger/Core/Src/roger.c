#include "roger.h"

static UART_HandleTypeDef* huart;

static uint8_t rx_buffer[1];
static CircularBuffer* message;

static const char answer[] = "roger\r\n";

void Roger_Init(UART_HandleTypeDef* huartInit, size_t bufferSize) {
	huart = huartInit;
	message = CircularBuffer_Create(bufferSize);
	HAL_UARTEx_ReceiveToIdle_DMA(huart, rx_buffer, sizeof(rx_buffer));
}

__weak void Roger_MessageRecieveCompleteCallback(size_t message_length) {}

uint8_t Roger_GetNextChar(void) {
	return CircularBuffer_Pop(message);
}

void HAL_UARTEx_RxEventCallback(UART_HandleTypeDef* huartCallback, uint16_t Size) {
    if (huartCallback->Instance != huart->Instance || Size == 0) {
    	return;
    }

    if (rx_buffer[0] != '\4') {
    	CircularBuffer_Push(message, rx_buffer[0]);
		HAL_UARTEx_ReceiveToIdle_DMA(huart, rx_buffer, sizeof(rx_buffer));
		return;
	}

    Roger_MessageRecieveCompleteCallback(CircularBuffer_GetSize(message));
}

void Roger_Roger() {
	HAL_UART_Transmit_DMA(huart, (uint8_t*)answer, sizeof(answer));

	HAL_UARTEx_ReceiveToIdle_DMA(huart, rx_buffer, sizeof(rx_buffer));
}
