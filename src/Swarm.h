/*
 * Swarm.h
 *
 *  Created on: 25-Jan-2018
 *      Author: anvith
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

class Swarm {
public:
	const static int NPARTICLES = 5000;

private:
	Particle *m_pParticles;

public:
	Swarm();
	virtual ~Swarm();
	const Particle * const getParticles() { return m_pParticles; }
};

#endif /* SWARM_H_ */
