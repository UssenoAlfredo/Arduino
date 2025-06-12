// Variables declaration

const int led1 = 5; // green led
const int led2 = 4; // red led
const int echo = 2; 
const int trigger = 6; 
const int buzzer = 3; // Buzzer Pin
const int treshold = 30; // 30cm of treshold
long duration;
int distance;

// Configuration Zone
void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(trigger, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  Serial.println("Starting ultrassonic detector...");
}

// Logic
void loop(){
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  duration = pulseIn(echo, HIGH); // measuring time
  distance = duration * (0.034 / 2); // speed of sound
  Serial.print(distance);
  Serial.println(" cm");
  
  if(distance < treshold){
  	tone(buzzer, 2000);
    digitalWrite(led2, HIGH);
    delay(600);
    noTone(buzzer);
    delay(400);
    digitalWrite(led2, LOW);
  } else {
    digitalWrite(led1, HIGH);
    delay(400);
    digitalWrite(led1, LOW);
  }
}
