#include <iostream> 
#include <cstdlib>
#include <fstream>

using namespace std;

int option;
int options_option;
string str = "mpg123 ";
string path;

int main() {
    
    cout << "choose a option ( 1/2 )" << endl;
    cout << "-----------------------" << endl;
    cout << "1. Play a mp3 file. (requires mpg123)" << endl;
    cout << "2. Options" << endl;
    
    cin >> option;
    
    switch(option) {
        
        default: {
            
            printf("Error 404: there is no such an option");
            return 404;
            
        }
            
        case 1: {
        
            printf("Type in path to your desired audio file: ");
            cin >> path;
        
            str = str + path + " & mpv --loop $HOME/.config/KarateMp3/visualization/vis.gif";
            const char *command = str.c_str();

            system(command);

            break;
        }
    
        return 0;
    
        case 2: {
        
    
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
