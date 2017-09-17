const int led = 22;
const int sensor = 32;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(sensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 if (digitalRead(sensor)){
      digitalWrite(led,LOW);
  }else{
      digitalWrite(led,HIGH);
    }
    
  
}
