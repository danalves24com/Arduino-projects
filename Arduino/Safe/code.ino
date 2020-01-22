#define key1 2 //connect wire 1 to pin 2
#define key2 3 //connect wire 2 to pin 3
#define key3 4 //connect wire 3 to pin 4
#define key4 5 //connect wire 4 to pin 5
int led = 13;
bool pass1;
bool pass2;
int cd = 10;

void setup() {
 Serial.begin(9600);
 pinMode(key1, INPUT_PULLUP);// set pin as input
 pinMode(key2, INPUT_PULLUP);// set pin as input
 pinMode(key3, INPUT_PULLUP);// set pin as input
 pinMode(key4, INPUT_PULLUP);// set pin as input   
 pinMode(led, OUTPUT);
 pinMode(cd, OUTPUT);
}



void loop() {
  pass1 = false;
  pass2 = false;
  int key1S = digitalRead(key1);// read if key1 is pressed
  int key2S = digitalRead(key2);// read if key1 is pressed
  int key3S = digitalRead(key3);// read if key1 is pressed
  int key4S = digitalRead(key4);// read if key1 is pressed 


  Serial.println(pass1);
     if(!key1S){
      Serial.println("key 1 is pressed");      
      pass1 = true;
     }
     if(!key2S){
      Serial.println("key 2 is pressed");
     }
     if(!key3S){
      Serial.println("key 3 is pressed");
     }
     if(!key4S){
      Serial.println("key 4 is pressed");
      pass2 = true;
     }          
     delay(100);

     if (pass1 == true && pass2 == true) {
      Serial.println("PASSWORD CORRECT");
      digitalWrite(led, HIGH);
      digitalWrite(cd, HIGH);
      delay(3000);
      digitalWrite(led, LOW);
      digitalWrite(cd, LOW);

}
}
  
