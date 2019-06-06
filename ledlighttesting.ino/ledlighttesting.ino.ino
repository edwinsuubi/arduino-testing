int green = 11;
int red  = 7;
int yellow =4;
void setup() {
  // put your setup code here, to run once:
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT); 
  pinMode(red, OUTPUT); 
   
}

void loop() {
  digitalWrite(green, HIGH);
  delay(1000);
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  // put your main code here, to run repeatedly:

}
