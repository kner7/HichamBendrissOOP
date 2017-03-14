#include "ofApp.h"

void ofApp::setup() {
    ofSetBackgroundColor(ofColor::black);

    part1 = Particle();
    part1.init();
}

void ofApp::update() {
	part1.sine();
    part1.move();
}

void ofApp::draw() {
    part1.draw();
}

void ofApp::keyPressed(int key) {
    part1.init();
}
