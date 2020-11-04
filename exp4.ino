int led1 = 10;
int led2 = 11;
int led3 = 12;
int led4 = 13;
int tim = 150;

void setup() {
  pinMode(led1 , OUTPUT); 
  pinMode(led2 , OUTPUT); 
  pinMode(led3 , OUTPUT); 
  pinMode(led4 , OUTPUT); 

}

void loop() {
digitalWrite(led1 , HIGH);
delay(tim);
digitalWrite(led2 , HIGH);
delay(tim);
digitalWrite(led3 , HIGH);
delay(tim);
digitalWrite(led4 , HIGH);
delay(tim);
digitalWrite(led1 , LOW);
delay(tim);
digitalWrite(led2 , LOW);
delay(tim);
digitalWrite(led3 , LOW);
delay(tim);
digitalWrite(led4 , LOW);
delay(tim);
digitalWrite(led4 , HIGH);
delay(tim);
digitalWrite(led3 , HIGH);
delay(tim);
digitalWrite(led2 , HIGH);
delay(tim);
digitalWrite(led1 , HIGH);
delay(tim);
digitalWrite(led4 , LOW);
delay(tim);
digitalWrite(led3 , LOW);
delay(tim);
digitalWrite(led2 , LOW);
delay(tim);
digitalWrite(led1 , LOW);
delay(tim);


}
