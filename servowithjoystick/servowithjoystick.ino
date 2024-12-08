#include <Servo.h>
const int SW = 2; // SW
const int X = 0; // VRx
const int Y = 1; // VRy
Servo myservo;
void setup() {
  myservo.attach(9);
  pinMode(SW, INPUT_PULLUP);
  pinMode(Y, INPUT);
  pinMode(X, INPUT);
  Serial.begin(9600);
}
void loop() {
  if (analogRead(Y) > 1000)
  {
    myservo.write(0);
    delay(1000);
    myservo.write(90);
    delay(1000);
  }
  if (analogRead(X) < 200)
  {
    myservo.write(180);
    delay(1000);
    myservo.write(0);
    delay(1000);
  }

}
