#include <iostream> 
#include <cstdlib>

using namespace std;

int option;
string str = "mpg123 ";
string path;

int main() {
    
    printf("choose a option ( 1/2 )");
    printf("-----------------------");
    printf("1. Play a file.");
    printf("2. Show a GIF path.");
    
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
        
            printf("GIF path: $HOME/.config/KarateMp3/visualization/vis.gif");
            return 0;
    
        }
    }
}
