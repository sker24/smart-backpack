include<Servo.h> // include server library
Servo servo; // create servo object to control a servo
int val; // initial value of input

void setup() {
  Serial.begin(9600); // Serial comm begin at 9600bps
  servo.attach(9);      // servo is connected at pin 9
}

void loop() {
  if (Serial.available()) // if serial value is available 
  {
    val = Serial.read();// then read the serial value
    if (val == 'd') //if value input is equals to d
    {
      servo.write(0); // the servo will move to position 0
      delay(1);    //delay for the servo to get to the position
     }
    if (val == 'a') //if value input is equals to a
    {
      servo.write(90); // the servo will move to position 180
      delay(1);       //delay for the servo to get to the position
    }
  }
}
