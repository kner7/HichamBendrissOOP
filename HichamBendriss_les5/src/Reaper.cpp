#include "Reaper.h"




void Reaper::Killer(vector<Particle> particles) {
	vector<Particle>::iterator i = particles.begin();
	while (i != particles.end()) {
		if (i->isAlive())
		{
			i = particles.erase(i);
		}
		else
		{
			i++; 
		}
		
	}
}