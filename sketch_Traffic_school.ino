int red = 9;
int orange =8;
int green=7;

int button =12;//switch is on pin 12

void setup() {
pinMode (red, OUTPUT);
pinMode (orange, OUTPUT);
pinMode (green, OUTPUT);

pinMode(button, INPUT);
digitalWrite(green, HIGH);

}

void loop(){
  if(digitalRead(button)== HIGH){
   delay (3); //software debounce
  if(digitalRead(button)== HIGH){
    changeLights();
    delay(3000);//wait for 3 seconds
    }
  }
}
void changeLights(){
    // green off, orange on for 3 seconds
    digitalWrite(green, LOW);
    digitalWrite(orange, HIGH);
    delay(3000);
    // turn off orange, then turn red on for 3 seconds
    digitalWrite(orange, LOW);
    digitalWrite(red, HIGH);
    delay(3000);
    // red and orange on for 3 seconds (red is already on though)
    digitalWrite(orange, HIGH);
    delay(3000);
    // turn off red and orange, then turn on green
    digitalWrite(orange, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(3000);
}
