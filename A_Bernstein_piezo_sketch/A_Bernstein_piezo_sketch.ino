int buzzerPin = 9;

int frequency = 3830;
int duration = 1000;
int rest = 500;


void setup() {
  // put your setup code here, to run once:
   pinMode(buzzerPin, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  float elapsed_time = 0;

  while(elapsed_time < duration){
    digitalWrite(buzzerPin, HIGH);
    delayMicroseconds(frequency / 2);

    digitalWrite(buzzerPin, LOW);
    delayMicroseconds(frequency /2);

    elapsed_time = elapsed_time + 1; 
  }

  delay(rest);
}
