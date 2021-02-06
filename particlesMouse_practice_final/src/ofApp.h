#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        ofImage cheese, apple, rice;
    
        ofFbo fbo1, fbo2, fbo3;
    
        int mode;
    
        float alpha1, alpha2, alpha3;
   char D1open, D2open, D3open, D1close, D2close, D3close, checkButton, buttonState, syncByte, buttonOn, buttonOff;
    
   ofSerial serial;
    
  
//private:
//    
//    void setupArduino(const int & version);
//    void digitalPinChanged(const int & pinNum);
//    void analogPinChanged(const int & pinNum);
//    void updateArduino();
//    
//    string buttonState;
//    string potValue;

    
    
};
