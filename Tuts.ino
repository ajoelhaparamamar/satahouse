int led1 = 8;
int led2 = 1;
int led3 = 2;
int led4 = 3;

int btnled1 = 4;
int btnled2 = 5;
int btnled3 = 6;
int btnled4 = 7;

void setup() {
Serial.begin(9600);

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);

pinMode(btnled1, INPUT);
pinMode(btnled2, INPUT);
pinMode(btnled3, INPUT);
pinMode(btnled4, INPUT);
}


void loop() {
  
int vbtnRead1 = digitalRead(btnled1);
int vbtnRead2 = digitalRead(btnled2);
int vbtnRead3 = digitalRead(btnled3);
int vbtnRead4 = digitalRead(btnled4);

Serial.println(vbtnRead1);
Serial.println(vbtnRead2);
Serial.println(vbtnRead3);
Serial.println(vbtnRead4);

 if(vbtnRead1 == HIGH){
    digitalWrite(led1, HIGH);
 } else if (vbtnRead1 == LOW) {
    digitalWrite(led1, LOW);
 }
  if(vbtnRead2 == HIGH){
    digitalWrite(led2, HIGH);
 } else if (vbtnRead2 == LOW) {
    digitalWrite(led2, LOW);
 }
  if(vbtnRead3 == HIGH){
    digitalWrite(led3, HIGH);
 } else if (vbtnRead3 == LOW) {
    digitalWrite(led3, LOW);
 }
  if(vbtnRead4 == HIGH){
    digitalWrite(led4, HIGH);
 } else if (vbtnRead4 == LOW) {
    digitalWrite(led4, LOW);
 }

}
