#include "ofApp.h"

void ofApp::setup() {
    ofBackground(ofColor::black);

    for (int i = 0; i < MAX_PARTICLES; i++) {
        particles.push_back(Particle());
    }
}

void ofApp::update() {
    vector<Particle>::iterator i = particles.begin();
    while(i != particles.end()) {
        i->move();
	
		i->lifetimer();
	i++;
    }
	MyFancyReaper.Killer(particles);
}


void ofApp::draw() {
    vector<Particle>::iterator i = particles.begin();
    while(i != particles.end()) {
        i->draw();
	i++;
    }
}

void ofApp::keyPressed(int key) {
    vector<Particle>::iterator i = particles.begin();
    while(i != particles.end()) {
        i->init();
	i++;
    }
}
