/*
 * Swarm.cpp
 *
 *  Created on: 25-Jan-2018
 *      Author: anvith
 */

#include "Swarm.h"

Swarm::Swarm() {
	// TODO Auto-generated constructor stub
	m_pParticles = new Particle[NPARTICLES];
}

Swarm::~Swarm() {
	// TODO Auto-generated destructor stub
	delete m_pParticles;
}

void Swarm::update() {
	for (int i=0; i<Swarm::NPARTICLES; i++){
		m_pParticles[i].update();
	}
}

