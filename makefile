#CC=gcc

#CFLAGS=-Wint-conversion

karatemp3-cpp: main.cpp
	g++ main.cpp -L/usr/lib -lSDL2 -lSDL2_mixer

karatemp3-core: main.c
	$(CC) -o karate $(CFLAGS) main.c -L/usr/lib -lSDL2 -lSDL2_mixer

