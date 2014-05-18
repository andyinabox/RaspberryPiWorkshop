#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	outputPin = 4;
	blinkCount = 0;
	blinkSwitch = true;

	cout << "SETUP" << endl;
	cout << "outputPin: " << outputPin << endl;
	cout << "blinkCount: " << blinkCount << endl;
	cout << "blinkSwitch: " << blinkSwitch << endl;
	cout << "initPinModeVal: " <<  pinModeVal(blinkSwitch) << endl;
 
	wiringPiSetup();
	pinMode(outputPin, OUTPUT);
	digitalWrite(outputPin, pinModeVal(blinkSwitch));
}

//--------------------------------------------------------------
void testApp::update(){
	blinkCount++;

	cout << "update blinkCount: " << blinkCount << endl;
	
	if(blinkCount > 300) {
		cout << "### Switch pin mode!" << endl;
		blinkCount = 0;
		blinkSwitch = !blinkSwitch;
		digitalWrite(outputPin, pinModeVal(blinkSwitch));
	}
}

uint8_t testApp::pinModeVal(bool sw) {
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