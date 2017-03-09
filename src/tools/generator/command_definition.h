#include <stddef.h>

#ifndef MOOPASS_COMMANDS_DEFINITION_H
#define MOOPASS_COMMANDS_DEFINITION_H

struct command_info {
  unsigned int id;
  const char *name;
  const char *description;
};


enum MOOPASS_COMMANDS {
/*[[[cog
	import cog
	import json
	with open('../include/moopass/commands/raw.inc') as json_file:
		commands = json.loads(json_file.read())["commands"]
		for command in commands:
			cog.outl("{} = {},".format(command["name"], command["id"]))
]]]*/
/*[[[end]]]*/
};

extern struct command_info infos[];

extern const size_t command_info_size;

#endif //MOOPASS_COMMANDS_DEFINITION_H
