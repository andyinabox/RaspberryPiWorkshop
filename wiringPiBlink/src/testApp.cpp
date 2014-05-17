#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	outputPin = 4;
	blinkCount = 0;
	blinkSwitch = true;

	wiringPiSetup();
	pinMode(outputPin, OUTPUT);
	digitalWrite(outputPin, pinMode(blinkSwitch));
}

//--------------------------------------------------------------
void testApp::update(){
	blinkCount++;
	if(blinkCount > 300) {
		blinkCount = 0;
		blinkSwitch = !blinkSwitch;
		digitalWrite(outputPin, pinMode(blinkSwitch));
	}
}

void testApp::pinMode(sw) {
	if(sw) {
		return HIGH;
	} else {
		return LOW;
	}
}

//--------------------------------------------------------------
void testApp::draw(){

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}