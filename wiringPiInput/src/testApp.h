#pragma once

#include "ofMain.h"

#ifdef TARGET_RASPBERRY_PI
	#include "wiringPi.h"
#endif

class testApp : public ofBaseApp{
	public:

	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	// ofxWiringPi wpi; // we don't even really need this yet
	int outputPin;
	int blinkCount;
	bool blinkSwitch;
	uint8_t pinModeVal(bool sw);
};