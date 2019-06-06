int led = 6;
const int trig = 12;
const int echo = 10;

float duration;
int distance;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, LOW);
  delay(2);

  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = (duration/2)*0.343;

  Serial.print("distance = ");
  if(distance >= 100){
    digitalWrite(led, HIGH);
    delay(500);
    }
    else{
      digitalWrite(led, LOW);
      delay(500);
      };
  Serial.println(distance);
  delay(2000);

}
