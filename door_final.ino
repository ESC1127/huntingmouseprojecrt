#include <Wire.h>
#include <Adafruit_MotorShield.h>

Adafruit_MotorShield AFMS = Adafruit_MotorShield();  

Adafruit_DCMotor *M1 = AFMS.getMotor(1);
Adafruit_DCMotor *M2 = AFMS.getMotor(2);
Adafruit_DCMotor *M3 = AFMS.getMotor(3);


bool d1Closed = false, d2closed = true, d3closed = true;
int buttonPin = 7;
bool motorOneDoIt = false;
int numOne = 0;

 char D1open = 'u';
 char D1close = 'j';
 char syncByte = '#';

 bool bPressedLastFrame = false;
 

void setup() {
  Serial.begin(115200);
  //Serial.println("Adafruit Motorshield v2 - DC Motor test!");
  pinMode (buttonPin, OUTPUT);
  AFMS.begin();
}

void loop() {
     
    bool bPressed = (digitalRead(buttonPin) == HIGH) ? true : false;
    if (bPressed) {

      if (!bPressedLastFrame){
        
         // send data to OF
         Serial.write('x');
         
         // open door
         delay(200);
         M1->setSpeed(220);
         M1->run(FORWARD);
         delay(800);
         M1->run(RELEASE);
         delay(6000);
         M1->setSpeed(200);
         M1->run(BACKWARD);
         delay(900);
         M1->run(RELEASE);

delay(9000);
       Serial.write ( 'a');
      
            
         M2->setSpeed(280);
         M2->run(FORWARD);
         delay(1020);
         M2->run(RELEASE);
         delay(6000);
         M2->setSpeed(260);
         M2->run(BACKWARD);
         delay(900);
         M2->run(RELEASE);

         
delay(9000);
      Serial.write('b');

           M3->setSpeed(280);
         M3->run(FORWARD);
         delay(1000);
         M3->run(RELEASE);
         delay(6000);
         M3->setSpeed(280);
         M3->run(BACKWARD);
         delay(900);
         M3->run(RELEASE);
         
      }

    }

   bPressedLastFrame = bPressed;
//      d1Closed = true; 
//    } else {
//      motorOneDoIt = false;
//      d1Closed = false;
//    }
    

  
}

//void moveMotorOne()  {
//
//  if (d1Closed && !motorOneDoIt) {
//    
//    motorOneDoIt = true;
//    M1->setSpeed(150);
//    M1->run(FORWARD);
//    delay(800);
//
//    M1->run(RELEASE);
//    delay(7000);
//    
//    Serial.println("back ");
//    M1->setSpeed(150);
//    M1->run(BACKWARD);
//    delay(800);
//    
//    M1->run(RELEASE);

    //d1Closed = false; 
     
    //motorOneDoIt = false; 
//   }
//   
//}
