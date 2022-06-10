# About KarateAudio
Here is my C audio solution.
I decided to create this because i there isn't any suckless music player on the market.
It currently plays mp3, wav, flac and ogg files.
You can download it for free for your linux (and windows soon!) system.
Due to apple's C compiling error bullshit and lack of macintoshes at my house it will not be avalible (never ever) on mac systems.

ps: legacy versions support osx, you can try them.

# Dependencies
To make my thing to work in 100% you'll need SDL2 + SDL2_mixer.

You can install these trough pacman:
```sudo pacman -S sdl2 sdl2_mixer```

Or apt:
```sudo apt install sdl2 sdl_mixer sdl2-dev sdl_mixer-dev```

# Installation
Installation is very easy, just copy downloaded binary into your desired directory.
Copy to /usr/bin to make it a standard command.

(AUR coming soon. maybe.)

# Compilation
To compile it for yourself, you don't need any additional libraries than the runtime ones.
Just type `gcc -L/usr/lib -lSDL2 -lSDL2_mixer /path/to/main.cpp -o /path/to/compiled/binary`
Or use `make`

It's that easy actually. maybe i missed something idk.
