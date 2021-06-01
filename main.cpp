#include <iostream> 
#include <cstdlib>
#include <fstream>

#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>

using namespace std;

int option;
int options_option;
string visualiser;

string path;

string str = "ogg123 ";
string str_vis;

int main(int argc, char **argv) {
    
    cout << "choose a option ( 1/3 )" << endl;
    cout << "-----------------------" << endl;
    cout << "1. Play a mp3 file. (requires mpg123)" << endl;
    cout << "2. Play a ogg file. (requires ogg123, linux only)" << endl;
    cout << "3. Config and GIF paths." << endl;
    
    cin >> option;
    
    switch(option)
	{
        
        default: {
            
            printf("Error 404: there is no such an option");
            return 404;
            
        }
            
        case 1: {

			play:

        	printf("Type in path to your desired audio file: ");
        	cin >> path;

			fstream config;
			config.open("config.conf", ios::in);

			if(config.good() == false) {
		
				cout << "there is no config file";
				exit(0);
		
			}

			string line;
			int line_nr = 1;
			while(getline(config, line)) {
				switch(line_nr) {
			
					case 1: visualiser = line; break;
			
				}	
				line_nr++;
			}

			config.close();
			cout << visualiser << endl;

        		if(visualiser == "visualiser = false") {

                	int result = 0;
    				int flags = MIX_INIT_MP3;

    			if (SDL_Init(SDL_INIT_AUDIO) < 0) {
        			printf("Failed to init SDL\n");
        			exit(1);
    			}

    			if (flags != (result = Mix_Init(flags))) {
        		printf("Could not initialize mixer (result: %d).\n", result);
        		printf("Mix_Init: %s\n", Mix_GetError());
        		exit(1);
    			}

				const char *path_mp3 = path.c_str();

    			Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
    			Mix_Music *music = Mix_LoadMUS(path_mp3);
    			Mix_PlayMusic(music, 1);

    			while (!SDL_QuitRequested()) {
        			SDL_Delay(250);
    			}

    			Mix_FreeMusic(music);
    			SDL_Quit();
				exit(0);

        	}
        	else {

            int result = 0;
    			int flags = MIX_INIT_MP3;

    			if (SDL_Init(SDL_INIT_AUDIO) < 0) {
        			printf("Failed to init SDL\n");
        			exit(1);
    			}

    			if (flags != (result = Mix_Init(flags))) {
        		printf("Could not initialize mixer (result: %d).\n", result);
        		printf("Mix_Init: %s\n", Mix_GetError());
        		exit(1);
    			}

				system("mpv --loop $HOME/.config/KarateMp3/visualisation/vis.gif");

				const char *path_mp3 = path.c_str();

    			Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
    			Mix_Music *music = Mix_LoadMUS(path_mp3);
    			Mix_PlayMusic(music, 1);

    			while (!SDL_QuitRequested()) {
        			SDL_Delay(250);
    			}

    			Mix_FreeMusic(music);
    			SDL_Quit();

			return 0;
			break;
        }

    	case 2: {
			goto play;
		}		

        case 3: {
        
    		cout << "choose a option ( 1/1 for now )" << endl;
    		cout << "-----------------------" << endl;
    		cout << "1. Show a GIF path" << endl;
    		
			cin >> options_option;
		
			switch(options_option) {
		
				default: {
				 
            		printf("Error 404: there is no such an option");
            		return 404;
            
				}
			
				case 1: {
				
            		printf("GIF path: $HOME/.config/KarateMp3/visualization/vis.gif");
            		return 0;		

				} 
    		}
		}
	}
}