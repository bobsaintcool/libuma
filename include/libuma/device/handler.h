#ifndef UMA_DEVICE_HANDLER_H
#define UMA_DEVICE_HANDLER_H

#include <libuma/retcode.h>
#include <stdlib.h>

typedef struct mooltipass_device* Mooltipass;
typedef struct mooltipass_list {
	Mooltipass *devices;
	size_t count;
} Mooltipass_list;

uma_ret_code uma_device_list(Mooltipass_list *mooltipass_list);
void uma_device_list_release(Mooltipass_list *mooltipass_list);
uma_ret_code uma_device_open(Mooltipass mooltipass);
void uma_device_close(Mooltipass mooltipass);
uma_ret_code uma_device_open_first(Mooltipass *mooltipass);
uma_ret_code uma_device_open_idx(Mooltipass *mooltipass, size_t index);
void uma_device_info_print(Mooltipass mooltipass);

#endif //UMA_DEVICE_HANDLER_H
