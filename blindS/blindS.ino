const int t = 2, echo = 3,buzz = 5;
long duration,distance;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(t, HIGH);
  pinMode(echo, HIGH);
  pinMode(buzz, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(t, HIGH);
  delay(15);
  digitalWrite(t, LOW);
  duration = pulseIn(echo, HIGH);
  distance = duration*0.017;// 1/(2*29)
  Serial.print("time = ");
  Serial.println(distance);
  if(distance <= 50 && distance >= 0) {
    digitalWrite(buzz, HIGH);
    delay(500);
    digitalWrite(buzz, LOW);
  }
  else{
    digitalWrite(buzz, HIGH);
  }
  delay(500);

}
