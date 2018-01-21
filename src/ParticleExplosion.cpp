//============================================================================
// Name        : ParticleExplosion.cpp
// Author      : Anvith
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "SDL2/SDL.h"

using namespace std;

int main(){
	const int WINDOW_WIDTH = 800;
	const int WINDOW_HEIGHT = 600;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    	cout << "SDL Init Failed" << endl;
    	return 1;
    }

    SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion",
    		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
			WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);

    if (window == NULL){
    	cout << "Failed to create window" << endl;
    	SDL_Quit();
    	return 2;
    }

    bool quit = false;
    SDL_Event event;
    while(!quit){
    	// update particles
    	// draw particles
    	// check for messages/events

    	while(SDL_PollEvent(&event)){
    		if(event.type == SDL_QUIT){
    			quit = true;
    		}
    	}
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
