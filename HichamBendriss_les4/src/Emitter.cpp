#include "Emitter.h"
#include "CurvingParticle.h"

Particle* Emitter::emit() {
    Particle* newParticle;
	newParticle = new Particle();

	newParticle->init(originX, originY);
	//TODO: vul dit verder in

    return newParticle;
}

void Emitter::setCurvingParticleRatio(float ratio) {
    curvingParticleRatio = ratio;
}

void Emitter::setOrigin(int x, int y) {
	originX = x;
	originY = y;
}

void Emitter::setColours(ofColor innerColour, ofColor outerColor) {
    inner = innerColour;
    outer = outerColor;
}
