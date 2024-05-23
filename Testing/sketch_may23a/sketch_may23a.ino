int redLed = 11; //for detecting
int yellowLed = 12; //for detecting
int greenLed = 13; //for detecting

int crashSensor = 3// set pin for collision sensor
;int crashVal;// set digital variable val

int interSensor = 2;
;int interVal;

void setup()
{ 
  pinMode(crashSensor, INPUT);// set collision sensor as input
  pinMode(interSensor, INPUT);

  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

}
void loop()
{
  crashVal = digitalRead(crashSensor);// read value on pin 3 and assign it to val
  interVal = digitalRead(interSensor);

  if (crashVal==HIGH) {
    digitalWrite(redLed, LOW);
  }
  else {
    digitalWrite(redLed, HIGH);
  }

  if (interVal == HIGH) {
    digitalWrite(yellowLed, HIGH);
  }
  else {
    digitalWrite(yellowLed, LOW);
  }
}
