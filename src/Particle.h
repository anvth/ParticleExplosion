/*
 * Particle.h
 *
 *  Created on: 25-Jan-2018
 *      Author: anvith
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

struct Particle {
public:
	double m_x;
	double m_y;

public:
	Particle();
	virtual ~Particle();
};

#endif /* PARTICLE_H_ */
