#ifndef INC_CIRCULAR_BUFFER_H_
#define INC_CIRCULAR_BUFFER_H_

#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

typedef struct CircularBuffer CircularBuffer;

CircularBuffer* CircularBuffer_Create(size_t capacity);
size_t CircularBuffer_GetSize(CircularBuffer* buffer);
void CircularBuffer_Push(CircularBuffer* buffer, uint8_t byte);
uint8_t CircularBuffer_Pop(CircularBuffer* buffer);

#endif /* INC_CIRCULAR_BUFFER_H_ */
