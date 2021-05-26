int redled= 9;

int greenled = 10;

int blueled = 11;

//int yellowled =12;

void setup() {

pinMode(redled, OUTPUT);

pinMode(greenled, OUTPUT);


pinMode(blueled, OUTPUT);
//pinMode(yellowled, OUTPUT);


digitalWrite(redled, HIGH);

digitalWrite(greenled, HIGH);

digitalWrite(blueled, HIGH);
//digitalWrite(yellowled, HIGH);

}

void loop() {

digitalWrite(redled, LOW); // turn the red LED on

delay(1000); // wait for a second

digitalWrite(redled, HIGH); // turn the LED off

delay(1000); // wait for a second

digitalWrite(greenled, LOW); // turn the green LED on

delay(1000); // wait for a second

digitalWrite(greenled, HIGH); // turn the green LED off

delay(1000); // wait for a second

digitalWrite(blueled, LOW); // turn the blue LED on

delay(1000); // wait for a second

digitalWrite(blueled, HIGH); // turn the blue LED off

delay(1000); // wait for a second
  

//digitalWrite(yellowled, LOW); // turn the yellow LED on

//(1000); // wait for a second

//digitalWrite(yellowled, HIGH); // turn the yellow LED off

//delay(1000); // wait for a second

}