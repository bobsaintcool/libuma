
#ifndef UMA_RET_CODE_H
#define UMA_RET_CODE_H

enum uma_ret_code {
	// Generic error
	UMA_SUCCESS = 0,
	UMA_ERROR_BAD_ARGS,
};

typedef enum uma_ret_code uma_ret_code;

const char * const error_info_get(uma_ret_code return_code, const char ** const help);

#endif //UMA_RET_CODE_H
