void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT); //initializes pin 5 as OUTPUT mode 
  /* This is a copy of the code in the loop function. This was commented out 
  to test the loop function first
  digitalWrite(5,HIGH); 
  delay(1000);
  digitalWrite(5,LOW);
  delay(1000);
  */

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5,HIGH); // turns on the LED
  delay(500); // wait for 0.5 sec
  digitalWrite(5,LOW); //turns off the LED
  delay(1000); // wait for 1 sec

}
