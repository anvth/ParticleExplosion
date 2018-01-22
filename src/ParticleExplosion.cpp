//============================================================================
// Name        : ParticleExplosion.cpp
// Author      : Anvith
// Version     :
// Copyright   : Your copyright notice
// Description : Particle Explosion in C++, Ansi-style
//============================================================================

#include <iostream>
#include "SDL2/SDL.h"

#include "Screen.h"

using namespace std;

int main(){
	Screen screen;

	if(screen.init() == false){
		cout << "Error Initializing SDL" << endl;
	}

    while(true){
    	// update particles

    	// draw particles
    	int elapsed = SDL_GetTicks();
    	unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0001)) * 128);
    	unsigned char green = (unsigned char)((1 + sin(elapsed * 0.001)) * 128);
    	unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.003)) * 128);

    	for (int y=0; y<Screen::WINDOW_HEIGHT; y++){
    		for(int x=0; x<Screen::WINDOW_WIDTH; x++){
    			screen.setPixel(x, y, red, green, blue);
    		}
    	}

    	// draw the screen
    	screen.update();

    	// check for messages/events
    	if (screen.processEvent() == false){
    		break;
    	}
    }

    screen.close();

    return 0;
}
