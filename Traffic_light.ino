int green_bus= 5;
int yellow_bus= 6;
int red_bus= 7;
int green_ped= 9;
int red_ped= 10;
int button_bus= 2;
int button_ped= 11;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(green_bus,OUTPUT);
pinMode(yellow_bus,OUTPUT);
pinMode(red_bus,OUTPUT);
pinMode(green_ped,OUTPUT);
pinMode(red_ped,OUTPUT);
pinMode(button_bus,INPUT);
pinMode(button_ped,INPUT);
}

void loop() {
  int a=1000;
  
switch(digitalRead(button_bus))  //driver button
{
  case HIGH:
   if (digitalRead(button_bus)== HIGH)
    {
      a=a+10000;
    }
  delay(500);
  digitalWrite(green_bus,LOW);
  digitalWrite(yellow_bus,HIGH);
  digitalWrite(red_bus,LOW);
  digitalWrite(green_ped,LOW);
  digitalWrite(red_ped,HIGH);
  delay(1000);
  digitalWrite(green_bus,HIGH);
  digitalWrite(yellow_bus,LOW);
  digitalWrite(red_bus,LOW);
  digitalWrite(green_ped,LOW);
  digitalWrite(red_ped,HIGH);
  delay(a);
  digitalWrite(green_bus,LOW);
  digitalWrite(yellow_bus,LOW);
  digitalWrite(red_bus,HIGH);
  digitalWrite(green_ped,HIGH);
  digitalWrite(red_ped,LOW);
  break;
}

switch(digitalRead(button_ped)) //pedestrian button
{
  case HIGH:
  digitalWrite(green_bus,LOW);
  digitalWrite(yellow_bus,HIGH);
  digitalWrite(red_bus,LOW);
  digitalWrite(green_ped,LOW);
  digitalWrite(red_ped,HIGH);
  delay(1000);
  digitalWrite(green_bus,LOW);
  digitalWrite(yellow_bus,LOW);
  digitalWrite(red_bus,HIGH);
  digitalWrite(green_ped,HIGH);
  digitalWrite(red_ped,LOW);
  delay(1000);
  break;
}
}
