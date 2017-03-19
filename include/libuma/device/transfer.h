#include <libuma/usb/message.h>
#include <libuma/device/handler.h>

typedef struct uma_transfer {
	uma_usb_message request;
	uma_usb_message response;
} uma_transfer;

// Transfer functions
uma_ret_code uma_device_transfer(Mooltipass mooltipass, uma_transfer* transfer_data);
