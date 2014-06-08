#include "testApp.h"
#define INPUT_PIN 0 // BCM GPIO 17

//--------------------------------------------------------------
void testApp::setup(){


	cout << "SETUP" << endl;
	cout << "input pin: " << INPUT_PIN << endl;
 	
 	#ifdef TARGET_RASPBERRY_PI
		wiringPiSetup();
	#endif
}

//--------------------------------------------------------------
void testApp::update() {

	#ifdef TARGET_RASPBERRY_PI
		cout << "in value: " << digitalRead(INPUT_PIN) << endl;
	#endif
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