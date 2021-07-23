#include "SDL2/SDL.h"
#include "SDL2/SDL_mixer.h"
#include "stdio.h"
#include "config.h"

/* main function, selects the file and plays it */
int main( int argc, char *argv[] ) {

	if (argc == 2) {

		strcpy(path, argv[1]);

	}

	Mix_Music *music;

	int result = 0;
	int flags = MIX_INIT_MP3;

	/* Starting SDL2 mixer */
	if (SDL_Init(SDL_INIT_AUDIO) < 0) {

		printf("Failed to init SDL\n");
		exit(1);

	}

	/* Start the audio engine */
	Mix_OpenAudio(44100, AUDIO_S16SYS, 2, 4096);
	if (flags != (result = Mix_Init(flags))) {

		printf("Could not initialize mixer (result: %d).\n", result);
		printf("Mix_Init: %s\n", Mix_GetError());
		exit(1);

	}

	/* Loading the music */
	music = Mix_LoadMUS(path);
	/* playing dat shit */
	Mix_PlayMusic(music, how_many_loops);

	if (music == NULL) {

		printf("The file doesn't exist!\n");
		return 404;

	}
	else {
		
		while (Mix_PlayingMusic() || Mix_PausedMusic()) {
	          	SDL_Delay(100);
	       	}

		/* quitting */
		Mix_FreeMusic(music);
		SDL_Quit();
		return 0;

	}
}
