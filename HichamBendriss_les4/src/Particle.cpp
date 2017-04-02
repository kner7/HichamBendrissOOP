#include "Particle.h"

Particle::Particle() {
}

void Particle::init(int x, int y) {
    radius = ofRandom(10, 50);

    location.x = x;
    location.y = y;

    speed.x = ofRandom(-5, 5);
    speed.y = ofRandom(-5, 5);

    innerColor = ofColor(31, 127, 255, 127);
    outerColor = ofColor(128, 255, 255, 15);
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