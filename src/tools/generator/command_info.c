#include <moopass/commands/definition.h>

struct command_info infos[] = {
/*[[[cog
	import cog
	import json
	with open('../include/moopass/commands/raw.inc') as json_file:
		commands = json.loads(json_file.read())["commands"]
		for command in commands:
			description = ""
			if "description" in command:
				description = command["description"]
			cog.outl("{{{}, \"{}\", \"{}\"}},".format(command["id"], command["name"], description))
]]]*/
/*[[[end]]]*/
};

/*[[[cog
	import cog
	import json
	with open('../include/moopass/commands/raw.inc') as json_file:
		commands = json.loads(json_file.read())["commands"]
		cog.outl("const size_t command_info_size = {};".format(len(commands)))
	]]]*/
/*[[[end]]]*/;
