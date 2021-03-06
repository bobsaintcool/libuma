
#ifndef UMA_USB_MESSAGE_H
#define UMA_USB_MESSAGE_H

// Definitions
#include <stdint.h>
#include <stdlib.h>

typedef struct uma_usb_message {
	uint8_t data_size;
	uint8_t message_id;
	unsigned char data[62];
} __attribute__((__packed__)) uma_usb_message;

void uma_usb_message_dump(uma_usb_message *message);

#endif //UMA_USB_MESSAGE_H
