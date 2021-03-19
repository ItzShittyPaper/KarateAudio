#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include "iostream"
#include "cstdlib"
#include "stdio.h"
#include "confuse.h"

#include "string"

using namespace std;

string str = "mpg123 ";
string path;

void play_mp3() {

	printf("Type in path to your desired audio file: ");
	cin >> path;	

	cfg_opt_t opts[] =
	    {
	        CFG_STR("visualiser_toggle", "false", CFGF_NONE),
	        CFG_END()
	    };
	    cfg_t *cfg;
	
	    cfg = cfg_init(opts, CFGF_NONE);
	    if(cfg_parse(cfg, "$HOME/.config/KarateMp3/config.conf") == CFG_PARSE_ERROR)
	        printf("Something is wrong, i can feel it.");	

	if(cfg_getstr(cfg, "visualiser_toggle") == "false") {
	
		str = str + path;
		const char *command = str.c_str();

		system(command);

	}
	else {
	
		str = str + path + " & mpv --loop $HOME/.config/KarateMp3/visualiser/vis.gif";
		const char *command = str.c_str();

		system(command);
	}
}
