int redLed = 11; //set pin for detecting
int yellowLed = 12; //set pin for detecting
int greenLed = 13; //set pin for detecting

int crashSensor = 3// set pin for collision sensor
;int crashVal;// variable for the crash one

int interSensor = 2;
;int interVal;// variable for the inter one 

void setup() //setups
{ 
  pinMode(crashSensor, INPUT);// set collision sensor as input
  pinMode(interSensor, INPUT);// the interupting sensor thinggy as an imput

  pinMode(redLed, OUTPUT); //the red led
  pinMode(yellowLed, OUTPUT); //the yellow led
  pinMode(greenLed, OUTPUT); //infer what this led is 

}

void loop() //loops
{
  crashVal = digitalRead(crashSensor);// read value on pin 3 and assign it to val
  interVal = digitalRead(interSensor);// read above but change a couple things, not that hard

  if (crashVal==HIGH) { //if the button isnt complete
    digitalWrite(redLed, LOW); //turns off the led
  }
  else { //if it is detected
    digitalWrite(redLed, HIGH); //try and guess
  }

  if (interVal == HIGH) { //really the one above but opposite, because math
    digitalWrite(yellowLed, HIGH); //this does something
  }
  else {
    digitalWrite(yellowLed, LOW); //so does this
  }
}
