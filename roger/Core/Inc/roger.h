#ifndef INC_ROGER_H_
#define INC_ROGER_H_

#include "stm32f4xx_hal.h"
#include "circular_buffer.h"

void Roger_Init(UART_HandleTypeDef* huartInit, size_t bufferSize);

void Roger_MessageRecieveCompleteCallback(size_t message_length);

uint8_t Roger_GetNextChar(void);

void Roger_Roger(void);

#endif /* INC_ROGER_H_ */
