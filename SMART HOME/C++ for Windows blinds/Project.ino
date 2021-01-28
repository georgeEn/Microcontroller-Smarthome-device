void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(12, INPUT);
  pinMode(2,OUTPUT);

}

void loop() {
a();
b();
c();
d(); 
}

int a(){
  
    if (digitalRead(6) == HIGH)
    {
      digitalWrite(4, LOW); // close the window
      digitalWrite(13, HIGH);
      delay(1000);
      digitalWrite(4,HIGH);
    }
    return 0;
}
int b(){
  if (digitalRead(7) == HIGH)
    {
      digitalWrite(4, HIGH); // open the window
      digitalWrite(13, LOW);
      delay(1000);
      digitalWrite(4,LOW);
    }
    return 0;
}
int c(){
  if (digitalRead(8) == HIGH)
    {
      digitalWrite(4, HIGH); // open the window
      digitalWrite(13, LOW);
      delay(1000);
          digitalWrite(4,LOW);
    }
    return 0;
}
int d(){
  if (digitalRead(12) == HIGH)
    {
      digitalWrite(13, HIGH); // close the window
      digitalWrite(4, LOW);
      delay(1000);
      digitalWrite(13,LOW);
    }
    return 0;
}
