#include <iostream> 
#include <cstdlib>
#include "confuse.h"

#include "mp3.cpp"

using namespace std;

int option;
int options_option;
string str2 = "ogg123 ";

int main() {
    
    cout << "choose a option ( 1/2 )" << endl;
    cout << "-----------------------" << endl;
    cout << "1. Play a mp3 file. (requires mpg123)" << endl;
    cout << "2. Play a ogg file. (requires ogg123, linux only)" << endl;
    cout << "3. Config and GIF paths." << endl;
    
    cin >> option;
    
    switch(option) {
        
        default: {
            
            printf("Error 404: there is no such an option");
            return 404;
            
        }
            
        case 1: {

		play_mp3();

		break;
        }
    
    	case 2: {
	
            printf("Type in path to your desired audio file: ");
            cin >> path;
        
            str2 = str2 + path + " & mpv --loop $HOME/.config/KarateMp3/visualisation/vis.gif";
            const char *command = str2.c_str();

            system(command);
		
	    return 0;
            break;

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
				
            			printf("GIF path: $HOME/.config/KarateMp3/visualisation/vis.gif");
            			return 0;		

			}
		} 
        }
    }
}
