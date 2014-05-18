#include "testApp.h"
#define OUTPUT_PIN 7

//--------------------------------------------------------------
void testApp::setup(){
	blinkCount = 0;
	blinkSwitch = true;

	cout << "SETUP" << endl;
	cout << "outputPin: " << OUTPUT_PIN << endl;
	cout << "blinkCount: " << blinkCount << endl;
	cout << "blinkSwitch: " << blinkSwitch << endl;
	cout << "initPinModeVal: " <<  pinModeVal(blinkSwitch) << endl;
 
	wiringPiSetup();
	pinMode(OUTPUT_PIN, OUTPUT);
	digitalWrite(OUTPUT_PIN, pinModeVal(blinkSwitch));
}

//--------------------------------------------------------------
void testApp::update(){
	blinkCount++;

	cout << "update blinkCount: " << blinkCount << endl;
	
	if(blinkCount > 300) {
		cout << "### Switch pin mode!" << endl;
		blinkCount = 0;
		blinkSwitch = !blinkSwitch;
		digitalWrite(OUTPUT_PIN, pinModeVal(blinkSwitch));
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