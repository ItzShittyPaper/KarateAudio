> Warning: THIS VERSION IS ONLY FOR DEVELOPMENT, BETA VERSIONS OFTEN DON'T WORK AS INTENDED, OR STRAIGHT UP DON'T OPEN. I'M OPEN TO CONTRIBUTIONS IN THIS BRANCH!

# About KarateMp3
Here is my c++ audio solution with gif visualizer!
I decided to create this because i like cool visualizers and i was bored.
It currently plays only mp3 and ogg files.
You can download it for free for your linux or macOS system.
Due to program structure and dependencies it will not be avalible on windows systems.

# Dependencies
To make my thing to work you need installed `mpv`, `mpg123` and `ogg123`

Why? `mpg123 / ogg123` is the actual backend for playing audio files, and `mpv` is for playing and controlling a visualizer. Yes, it is bloated.

# Installation
Installation is very easy, just copy downloaded code into your desired directory.

Config file is in `$HOME/.config/KarateMp3/config.conf`
Gif with visualization should be in `$HOME/.config/KarateMp3/visualisation/vis.gif`

# Compilation
If you want to compile it for yourself, there are only a few commands, but you need to install `libconfuse` though.

> Ubuntu/Debian (and simillar)
```sudo apt-get install libconfuse-dev```

> Arch Linux
```Include = /etc/pacman.d/mirrorlist | [community] | sudo pacman -S confuse```


> Fedora
```dnf install libconfuse```

Just type `g++ -L/usr/lib /path/to/main.cpp -o /path/to/compiled/binary -lconfuse`

It's that easy!
