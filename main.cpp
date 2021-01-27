#include <cstdlib>
#include <iostream>

using namespace std;

string str = "mpg123 ";
char path[128];

int main() {

    printf("Type in path to your desired audio file: ");
    cin.getline(path, 128);

    str = str + path + " & mpv --loop $HOME/.config/KarateMp3/visualization/vis.gif";
    const char *command = str.c_str();

    system(command);

    return 0;
            
}
