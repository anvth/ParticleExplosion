//============================================================================
// Name        : ParticleExplosion.cpp
// Author      : Anvith
// Version     :
// Copyright   : Your copyright notice
// Description : Particle Explosion in C++, Ansi-style
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

    SDL_Renderer *renderer = SDL_CreateRenderer(window,
    		-1,
			SDL_RENDERER_PRESENTVSYNC);
    if (renderer == NULL){
		cout << "Failed to create Renderer" << endl;
		SDL_DestroyWindow(window);
		SDL_Quit();
		return 3;
	}

    SDL_Texture *texture = SDL_CreateTexture(renderer,
    		SDL_PIXELFORMAT_RGBA8888,
			SDL_TEXTUREACCESS_STATIC,
			WINDOW_WIDTH,
			WINDOW_HEIGHT);
    if (texture == NULL){
		cout << "Failed to create Texture" << endl;
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(window);
		SDL_Quit();
		return 4;
	}

    Uint32 *buffer = new Uint32[WINDOW_WIDTH*WINDOW_HEIGHT];

    memset(buffer, 0, WINDOW_WIDTH*WINDOW_HEIGHT*sizeof(Uint32));

    for(int i=0; i<WINDOW_HEIGHT*WINDOW_WIDTH; i++) {
    	buffer[i] = 0x00FFFFFF;
    }

    SDL_UpdateTexture(texture, NULL, buffer, WINDOW_WIDTH*sizeof(Uint32));
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);

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

    delete [] buffer;
    SDL_DestroyRenderer(renderer);
    SDL_DestroyTexture(texture);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
