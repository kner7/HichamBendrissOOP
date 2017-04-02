#pragma once


#include "Particle.h"

class Emitter {
    public:
        void setOrigin(int x, int y);

        void setCurvingParticleRatio(float ratio);

        void setColours(ofColor innerColour, ofColor outerColor);

        Particle* emit();

    protected:
        int originX;
        int originY;
        float curvingParticleRatio;
		Particle* newParticle();
        ofColor inner;
        ofColor outer;
};

