#pragma once

#include "ofMain.h"

class Particle {

    private:
        ofPoint location;
        int radius;
        ofVec2f speed;
		long lifetime;
		bool isAlive;

        ofColor innerColor;
        ofColor outerColor;

    public:
        Particle(); // constructor

        void init();
		
        void move();

        void draw();

		bool isAlive();

		void lifetimer();
};
