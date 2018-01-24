//============================================================================
// Name        : ParticleExplosion.cpp
// Author      : Anvith
// Version     :
// Copyright   : Your copyright notice
// Description : Particle Explosion in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "SDL2/SDL.h"

#include "Screen.h"
#include "Swarm.h"

using namespace std;

int main(){
	srand(time(NULL));
	Screen screen;

	if(screen.init() == false){
		cout << "Error Initializing SDL" << endl;
	}

	Swarm swarm;

    while(true){
    	// update particles

    	// draw particles
    	const Particle * const pParticles = swarm.getParticles();
    	for (int i=0; i<Swarm::NPARTICLES; i++){
    		Particle particle = pParticles[i];

    		int x = (particle.m_x + 1) * Screen::WINDOW_WIDTH/2;
    		int y = (particle.m_y + 1) * Screen::WINDOW_WIDTH/2;

    		screen.setPixel(x, y , 0, 255, 0);
    	}
//    	int elapsed = SDL_GetTicks();
//    	unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0001)) * 128);
//    	unsigned char green = (unsigned char)((1 + sin(elapsed * 0.001)) * 128);
//    	unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.003)) * 128);
//
//    	for (int y=0; y<Screen::WINDOW_HEIGHT; y++){
//    		for(int x=0; x<Screen::WINDOW_WIDTH; x++){
//    			screen.setPixel(x, y, red, green, blue);
//    		}
//    	}

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
