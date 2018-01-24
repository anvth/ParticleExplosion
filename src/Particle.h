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

	double m_xspeed;
	double m_yspeed;

public:
	Particle();
	virtual ~Particle();
	void update();
};

#endif /* PARTICLE_H_ */
