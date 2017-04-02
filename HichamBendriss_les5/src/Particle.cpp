#include "Particle.h"

Particle::Particle() {
}

void Particle::init() {
    radius = ofRandom(10, 50);
    location.x = ofGetWidth() / 2;
    location.y = ofGetHeight() / 2;
	lifetime = 10;
    speed.x = ofRandom(-5, 5);
    speed.y = ofRandom(-5, 5);

    innerColor = ofColor(31, 127, 255, 127);
    outerColor = ofColor(128, 255, 255, 15);
}

void Particle::move() {
    location += speed;
}

void Particle::lifetimer() {
	lifetime -= 1;
	
}

bool Particle::isAlive() {
	if (lifetime < 1)
	{
		return false;
	}
	else {
		return true;
	}
}


void Particle::draw() {
    ofSetColor(outerColor);
    ofDrawCircle(location, radius * 2);

    ofSetColor(innerColor);
    ofDrawCircle(location, radius);

    ofSetColor(ofColor::white);
    ofDrawCircle(location, radius * 0.25);
}
