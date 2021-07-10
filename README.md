# About KarateMp3
Here is my c audio solution.
I decided to create this because i decided to make suckless-compliant music player.
It currently plays mp3, wav, flac and ogg files.
You can download it for free for your linux (and windows soon!) system.
Due to apple's own compiler and lack of mac machines in my home it will not be avalible (never ever) on mac systems.

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

-------------------------------------------------------------------------------------------
This program is under license:
# "I Don't Fucking Care Public License"
If i'm too lazy to set a license to `GNU GPL v3` i am using this piece of crap.

## Do whatever you want, even post it on r34 (sexy code meow lolz)
I don't care about that, it isn't a work of art, it is just a piece of runnable crap that i wrote while drunk at 2am with my drunk (too) friends.
If you want to steal it for your purposes, do it. Maybe i will see it and give you a "Code lvl non-YandereDev" award.

## If something doesn't work, post it in issues and nothing else.
I don't give a fuck about errors in my code, if you saw one, just report it in issues tab. MAYBE i will fix it (if i can)

## Fan-Made Michaelsoft© Binbows™ support is encouraged and appreciated.
But i won't support it probably.

## If you payed someone for this shit, you have been scammed.
My shit is free, go beat up that guy. And how did you bought this?
Get real, nobody would pay for this piece of turd.

# DI ENT
