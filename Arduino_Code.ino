#include <Servo.h>
// create servo motors objects
Servo servoMotor1;
Servo servoMotor2;
// initialze the servo position as zero
int pos = 0; 

void setup() {
  // attache servo motors to Arduino pins
  servoMotor1.attach(5);
  servoMotor2.attach(6);
}

void loop() {
  // move motor 1 from 0 degrees to 180 degrees in steps of 1 degree with 15ms delay in between
  for(pos = 0; pos<= 180; pos += 1)  
  {                                  
    servoMotor1.write(pos);  
    servoMotor2.write(pos);          
    delay(15);                       
  }

  // move motor 2 from 180 degrees to 0 degrees in steps of 1 degree with 15ms delay in between
  for(pos = 180; pos>= 0; pos -= 1)     
  {                               
    servoMotor1.write(pos);
    servoMotor2.write(pos);             
    delay(15);                       
  }

}
