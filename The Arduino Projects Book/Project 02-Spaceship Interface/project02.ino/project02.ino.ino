int switchState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);               // red LED
  pinMode(4, OUTPUT);               // red LED 
  pinMode(5, OUTPUT);               // green LED
  pinMode(2, INPUT);                // button
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);     // Checks if button is pressed

  if (switchState == LOW) {         // Button is not pressed
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

  } else {                          // Button is pressed
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(250);                     // Delay quarter second

    // toggle LEDs
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    
    delay(250);                     // Delay quarter second
  }

}