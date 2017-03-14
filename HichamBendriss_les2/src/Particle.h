#pragma once

#include "ofMain.h"

class Particle {

    private:
        ofPoint location;
        int radius;
        ofVec2f speed;
        long lifetime;
		float radx;
		float rady;
		float startx;
		float starty;
	
        ofColor innerColor;
        ofColor outerColor;

    public:
        Particle(); // constructor

        void init();
		void sine();
        void move();

        void draw();
};