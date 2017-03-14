#include "Particle.h"

Particle::Particle() {
}

void Particle::init() {
	radius = ofRandom(5, 20);
	radx = 0.001;
	rady = 0.001;
	location.x = ofGetWidth() / 2;
	location.y = ofGetHeight() / 2;
	startx = ofRandom(-0.1, 0.1);
	starty = ofRandom(-0.1, 0.1);
	speed.x = startx;
	speed.y = starty;

    innerColor = ofColor(31, 127, 255, 127);
    outerColor = ofColor(128, 255, 255, 15);
}

void Particle::sine() {
	startx += ofRandom(0, 0.1);
	starty += ofRandom(0, 0.1);
	if (location.x > ofGetWidth() / 2 && location.y > ofGetWidth() / 2)
	{
		if (speed.x > -startx)
		{
			speed.x -= startx;
		}
		if (speed.y > 0.1)
		{
			speed.y -= starty;
		}
	}
	if (location.x< ofGetWidth() / 2 && location.y < ofGetWidth() / 2)
	{
		if (speed.x < startx)
		{
			speed.x += startx;
		}
		if (speed.y < -0.1)
		{
			speed.y += starty;
		}
	}
	if (location.x > ofGetWidth() / 2 && location.y < ofGetWidth() / 2)
	{
		if (speed.x > 0.1)
		{
			speed.x -= startx;
		}
		if (speed.y < starty)
		{
			speed.y += starty;
		}
	}
	if (location.x < ofGetWidth() / 2 && location.y > ofGetWidth() / 2)
	{
		if (speed.x < -0.1)
		{
			speed.x += startx;
		}
		if (speed.y > -starty)
		{
			speed.y -= starty;
		}
	}
}
void Particle::move() {
    location += speed;
}

void Particle::draw() {
    ofSetColor(outerColor);
    ofDrawCircle(location, radius * 2);

    ofSetColor(innerColor);
    ofDrawCircle(location, radius);

    ofSetColor(ofColor::white);
    ofDrawCircle(location, radius * 0.25);
}

void Particle::setColors(ofColor outer, ofColor inner) {
	outerColor = outer;
	innerColor = inner;
}
