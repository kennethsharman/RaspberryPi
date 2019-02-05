/**
 * Stepper Motor Demonstration
 * Followed Tutorial from https://droneworkshop.com
 * Feb 4, 2019
 */

// Import Arduino stepper library
#include <Stepper.h>

const float STEPS_PER_REV = 32; // Steps per interal motor revolution
const float GEAR_RED = 64; // Gear reduction
const float STEPS_PER_OUT_REV = STEPS_PER_REV * GEAR_RED;

int StepsRequired; // # steps required

// Instantiate Stepper Class
// Pins used are 8, 9, 10, 11
// Connected to ULN2003 Motor Driver In1, In2, In3, In4
// Pins entered 1-3-2-4 for proper step sequencing
Stepper steppermotor(STEPS_PER_REV, 8, 10, 9, 11);

void setup() {
  // Nothing - STepper Library sets pins as outputs
}

void loop() {
  // Slow - 4-step CW sequence to observe lights on driver boards
  steppermotor.setSpeed(1);
  StepsRequired = 4;
  steppermotor.step(StepsRequired);
  delay(1000);

  // Rotate CW 1/2 turn slowly
  StepsRequired = STEPS_PER_OUT_REV /2;
  steppermotor.setSpeed(400);
  steppermotor.step(StepsRequired);
  delay(1000);

  // Rotate CCW 1/2 turn quickly
  StepsRequired = - STEPS_PER_OUT_REV /2;
  steppermotor.setSpeed(800);
  steppermotor.step(StepsRequired);
  delay(2000);
  
} // end loop
