#include "Reaper.h"
#include "ofApp.h"



void Reaper::Killer(vector<Particle> particles) {
	vector<Particle>::iterator i = particles.begin();
	while (i != particles.end()) {
		if (i->isAlive())
		{
			i = particles.end();
		}
		i++;
	}
}