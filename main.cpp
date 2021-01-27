#include <cstdlib>
#include <iostream>

using namespace std;

int menu;

string str = "mpg123 ";
char path[128];

int main() {

    std::cout << "What do you want to do?" << endl;
    printf("1. Play a mp3 / ");
    printf("2. Show a visualizer path");
    cin >> menu;
    
    switch(menu) {
        
        default: {
        
            printf("There isn't such an option");
            exit(0);
            break;
            
        }
        case 1: {
        
            printf("Type in path to your desired audio file: ");
            cin.getline(path, 128);

            str = str + path + " & mpv --loop $HOME/.config/KarateMp3/visualization/vis.gif";
            const char *command = str.c_str();

            system(command);

            return 0;
            break;
            
        }
    
        case 2: {
        
            printf("Visualizer path is: $HOME/.config/KarateMp3/visualization/vis.gif");
            exit(0);
            break;
        
        }
    
    }
}
