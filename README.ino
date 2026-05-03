# RC-CAR
// Motor A connections
const int enA = 10;  // PWM pin for speed control
const int in1 = 8;
const int in2 = 7;

// Motor B connections
const int enB = 11;  // PWM pin for speed control
const int in3 = 4;
const int in4 = 2;

void setup() {
  // Set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  // Initially stop both motors
  stopMotors();
}

void loop() {
  // Example motor control sequence
  
  // Move both motors forward at full speed
  moveForward(255, 255);
  delay(2000);
  
  
}

// Motor control functions
void moveForward(int speedA, int speedB) {
  // Motor A forward
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, speedA);
  
  // Motor B forward
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, speedB);
}

void moveBackward(int speedA, int speedB) {
  // Motor A backward
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, speedA);
  
  // Motor B backward
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB, speedB);
}

void turnRight(int speedA, int speedB) {
  // Motor A forward
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, speedA);
  
  // Motor B backward
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB, speedB);
}

void turnLeft(int speedA, int speedB) {
  // Motor A backward
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, speedA);
  
  // Motor B forward
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, speedB);
}

void stopMotors() {
  // Motor A stop
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enA, 0);
  
  // Motor B stop
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enB, 0);
}
