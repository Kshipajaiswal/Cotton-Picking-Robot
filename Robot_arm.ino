#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// Servo motor setup
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
#define SERVO_MIN  130  // Min pulse length
#define SERVO_MAX  550  // Max pulse length

// Motor Pins on L293D Motor Shield
#define MOTOR_1_A 3
#define MOTOR_1_B 4
#define MOTOR_2_A 5
#define MOTOR_2_B 6

void setup() {
  Serial.begin(9600);

  // Motor Pins as output
  pinMode(MOTOR_1_A, OUTPUT);
  pinMode(MOTOR_1_B, OUTPUT);
  pinMode(MOTOR_2_A, OUTPUT);
  pinMode(MOTOR_2_B, OUTPUT);

  // Servo setup
  pwm.begin();
  pwm.setPWMFreq(50);  // Standard servo freq

  delay(1000);
  Serial.println("Cotton Picking Robot Ready");
}

// Motor control function
void moveRobot(char direction) {
  if (direction == 'F') {  // Forward
    digitalWrite(MOTOR_1_A, HIGH);
    digitalWrite(MOTOR_1_B, LOW);
    digitalWrite(MOTOR_2_A, HIGH);
    digitalWrite(MOTOR_2_B, LOW);
  } else if (direction == 'B') {  // Backward
    digitalWrite(MOTOR_1_A, LOW);
    digitalWrite(MOTOR_1_B, HIGH);
    digitalWrite(MOTOR_2_A, LOW);
    digitalWrite(MOTOR_2_B, HIGH);
  } else if (direction == 'L') {  // Left
    digitalWrite(MOTOR_1_A, LOW);
    digitalWrite(MOTOR_1_B, HIGH);
    digitalWrite(MOTOR_2_A, HIGH);
    digitalWrite(MOTOR_2_B, LOW);
  } else if (direction == 'R') {  // Right
    digitalWrite(MOTOR_1_A, HIGH);
    digitalWrite(MOTOR_1_B, LOW);
    digitalWrite(MOTOR_2_A, LOW);
    digitalWrite(MOTOR_2_B, HIGH);
  } else if (direction == 'S') {  // Stop
    digitalWrite(MOTOR_1_A, LOW);
    digitalWrite(MOTOR_1_B, LOW);
    digitalWrite(MOTOR_2_A, LOW);
    digitalWrite(MOTOR_2_B, LOW);
  }
}

// Move arm to pick and place cotton
void pickCotton() {
  // Move base
  pwm.setPWM(0, 0, SERVO_MIN);
  delay(800);
  // Lower arm
  pwm.setPWM(1, 0, SERVO_MAX);
  delay(800);
  // Close gripper
  pwm.setPWM(2, 0, SERVO_MIN);
  delay(1000);
  // Lift arm
  pwm.setPWM(1, 0, SERVO_MIN);
  delay(800);
  // Open gripper
  pwm.setPWM(2, 0, SERVO_MAX);
  delay(1000);
}

void loop() {
  if (Serial.available()) {
    char cmd = Serial.read();
    if (cmd == 'P') {
      pickCotton();
    } else {
      moveRobot(cmd);
    }
  }
}

