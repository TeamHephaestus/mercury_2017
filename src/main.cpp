#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// The pwm servo driver object
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

// Here, define min/max values for the motors (this will have to change around a lot)
#define RIGHTMIN  150
#define RIGHTMAX 590
#define LEFTMIN 150
#define LEFTMAX 590

// Here, define pin nums on the actual servo board (1-16) for each motor
uint8_t RIGHT_MOTOR = 0;
uint8_t LEFT_MOTOR = 1;

void setup() {
	// Keep these two lines here
	pwm.begin();
	pwm.setPWMFreq(60);
}

void loop() {

}

// Basic movement functions
void goForward() {
	pwm.setPWM(RIGHT, 0, RIGHTMAX);
	pwm.setPWM(LEFT, 0, LEFTMAX);
}

void goBackward() {
	pwm.setPWM(RIGHT, 0, RIGHTMIN);
	pwm.setPWM(LEFT, 0, LEFTMIN);
}

void turnLeft() {
	pwm.setPWM(RIGHT, 0, RIGHTMAX);
	pwm.setPWM(LEFT, 0, LEFTMIN);
}

void turnRight() {
	pwm.setPWM(RIGHT, 0, RIGHTMIN);
	pwm.setPWM(LEFT, 0, LEFTMAX);
}
