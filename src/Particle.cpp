/*
 * Particle.cpp
 *
 *  Created on: 25-Jan-2018
 *      Author: anvith
 */

#include "Particle.h"
#include<stdlib.h>

Particle::Particle() {
	// TODO Auto-generated constructor stub
	m_x = ((2.0 * rand())/RAND_MAX) -1;
	m_y = ((2.0 * rand())/RAND_MAX) -1;
}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

