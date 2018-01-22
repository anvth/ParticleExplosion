/*
 * Screen.h
 *
 *  Created on: 21-Jan-2018
 *      Author: anvith
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include <iostream>
#include "SDL2/SDL.h"

using namespace std;

class Screen {
public:
	const static int WINDOW_WIDTH = 800;
	const static int WINDOW_HEIGHT = 600;

private:
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer;

public:
	Screen();
	bool init();
	void update();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	bool processEvent();
	void close();
};

#endif /* SCREEN_H_ */
