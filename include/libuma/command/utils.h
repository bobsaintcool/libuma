#include <libuma/command/type.h>
#include <stdint.h>
#include <stdio.h>

#ifndef UMA_COMMAND_UTILS_H
#define UMA_COMMAND_UTILS_H

int moopass_command_name_get(char const ** name, uint8_t command_id);
int moopass_command_id_get_from_name(char const * const name, uint8_t *command_id);
int moopass_command_get_from_id(uint8_t command_id, uma_command_info **command_info);
int moopass_command_get_from_name(char const * const name, uma_command_info **command_info);
void command_list_print(FILE *output, char const *prefix);

#endif //UMA_COMMAND_UTILS_H
