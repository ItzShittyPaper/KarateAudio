#include <cstdlib>
#include <iostream>

using namespace std;

<<<<<<< Updated upstream
int menu;

=======
int option;
int options_option;
>>>>>>> Stashed changes
string str = "mpg123 ";
char path[128];

int main() {

    std::cout << "What do you want to do?" << endl;
    printf("1. Play a mp3 / ");
    printf("2. Show a visualizer path");
    cin >> menu;
    
<<<<<<< Updated upstream
    switch(menu) {
=======
    printf("choose a option ( 1/2 )");
    printf("-----------------------");
    printf("1. Play a file.");
    printf("2. Options");
    
    cin >> option;
    
    switch(option) {
>>>>>>> Stashed changes
        
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
        
<<<<<<< Updated upstream
            printf("Visualizer path is: $HOME/.config/KarateMp3/visualization/vis.gif");
            exit(0);
            break;
        
=======
    
    		printf("choose a option ( 1/1 for now )");
    		printf("-----------------------");
    		printf("1. Show a GIF path");
    		
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
>>>>>>> Stashed changes
        }
    
    }
}
