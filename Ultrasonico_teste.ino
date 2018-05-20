#include <Ultrasonic.h>
#include <Buzzer.h>

Ultrasonic ultrasonic(4,6); // (Trig PIN,Echo PIN)
int buz;

void setDelay(int buz) {
  if(buz<20&&buz>15) {
    tone(10,262,200);
    delay(1500);
  } else if(buz<15&&buz>10) {
     tone(10,262,200);
    delay(1000);
    } else if(buz<10&&buz>5) {
     tone(10,262,200);
    delay(500);
    }
   else if(buz == 5){
     tone(10,262,200);
    delay(250);
  }
   else if(buz == 4){
     tone(10,262,200);
    delay(200);
  }
   else if(buz == 3){
     tone(10,262,200);
    delay(150);
  }
  else if(buz == 2){
     tone(10,262,200);
    delay(100);
  }
}

void setup() {
  pinMode(10,OUTPUT); //Pino do buzzer
  Serial.begin(9600);
  pinMode(4, OUTPUT); // VCC pin
  pinMode(7, OUTPUT); // GND ping
  digitalWrite(4, HIGH); // VCC +5V mode  
  digitalWrite(7, LOW);  // GND mode
}

void loop()
{
  Serial.print(ultrasonic.Ranging(CM)); // CM or INC
  Serial.println(" cm" );
  setDelay(ultrasonic.Ranging(CM));
}
