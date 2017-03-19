#include <libuma/device/transfer.h>
#include <libuma/usb/sync.h>

uma_ret_code uma_device_transfer(Mooltipass mooltipass, uma_transfer* transfer_data) {
	uma_usb_sync_send(mooltipass, &transfer_data->request);
	uma_usb_sync_read(mooltipass, &transfer_data->response);

	return UMA_SUCCESS;
}
