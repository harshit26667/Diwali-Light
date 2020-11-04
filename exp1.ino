int led1 = 10;
int led2 = 11;
int led3 = 12;
int led4 = 13;
int tim = 200;

void setup() {
  pinMode(led1 , OUTPUT); 
  pinMode(led2 , OUTPUT); 
  pinMode(led3 , OUTPUT); 
  pinMode(led4 , OUTPUT); 

}

void loop() {
digitalWrite(led4 , LOW);
digitalWrite(led1 , HIGH);
delay(tim);
digitalWrite(led1 , LOW);
digitalWrite(led2 , HIGH);
delay(tim);
digitalWrite(led2 , LOW);
digitalWrite(led3 , HIGH);
delay(tim);
digitalWrite(led3 , LOW);
digitalWrite(led4 , HIGH);
delay(tim);



}
