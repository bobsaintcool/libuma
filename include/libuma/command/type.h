#include <stddef.h>
#include <stdint.h>

#ifndef UMA_COMMAND_TYPE_H
#define UMA_COMMAND_TYPE_H

typedef struct uma_command_info {
	uint8_t id;
	const char *name;
	const char *description;
} uma_command_info;

#endif //UMA_COMMAND_TYPE_H
