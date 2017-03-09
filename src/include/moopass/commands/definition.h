#define COMMAND(NAME, ID, RETURN, PARAMETER) NAME = ID, 
enum test {
#include "moopass/commands/raw.inc"
};
#undef COMMAND

#define COMMAND(NAME, ID, RETURN, PARAMETER) +1
static const size_t command_count = 0
#include "moopass/commands/raw.inc"
;
#undef COMMAND

#define COMMAND(NAME, ID, RETURN, PARAMETER) {ID, #NAME},
static const struct command_info testa[] = {
#include "moopass/commands/raw.inc"
};
#undef COMMAND
