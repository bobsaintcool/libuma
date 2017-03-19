#ifndef UMA_DEVICE_INTERNAL_H
#define UMA_DEVICE_INTERNAL_H

#include <libusb-1.0/libusb.h>

struct mooltipass_device {
	libusb_device *usb_device;
	libusb_device_handle *usb_handle;
};

#endif //UMA_DEVICE_INTERNAL_H
