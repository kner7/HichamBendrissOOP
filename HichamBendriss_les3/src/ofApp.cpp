#include "ofApp.h"


void ofApp::setup() {
    ofSetBackgroundColor(ofColor::black);

	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i] = new Particle();
		particles[i]->init();
	}
}

void ofApp::update() {
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i]->move();
		particles[i]->sine();
	}
}

void ofApp::draw() {
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i]->draw();
	}
}

void ofApp::keyPressed(int key) {
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i] = new Particle();
		particles[i]->init();
		setRandomColor(particles[i]);
	}
}

void ofApp::setRandomColor(Particle* particle) {
	float random = ofRandom(10);
	if (random > 3 && random < 7) {
		particle->setColors(ofColor(247, 140, 129, 20),ofColor(277, 47, 17, 127));
	}
	else if (random >= 7) {
		particle->setColors(ofColor(250, 155, 100, 20),ofColor(240, 44, 100, 127));
	}
}
