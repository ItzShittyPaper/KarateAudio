# About KarateMp3
Here is my c++ audio solution with gif visualizer!
I decided to create this because i like cool visualizers and i was bored.
It currently plays only mp3 files, but i will make a ogg support soon.
You can download it for free for your linux or macOS system.
Due to program structure and dependencies it will not be avalible on windows systems.

# Dependencies
To make my thing to work you need installed `mpv` and `mpg123`.

Why? `mpg123` is the actual backend for playing mp3 files, and `mpv` is for playing and controlling a visualizer. Yes, it is bloated.

# Installation
Installation is very easy, just copy downloaded code into your desired directory.
Gif with visualization should be in `$HOME/.config/KarateMp3/visualisation/vis.gif`

# Compilation
To compile it for yourself, you don't need any additional libraries.
Just type `g++ /path/to/main.cpp -o /path/to/compiled/binary`

It's that easy!
