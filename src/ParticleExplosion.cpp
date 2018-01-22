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
    	screen.setPixel(400, 300, 255, 255, 255);

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
