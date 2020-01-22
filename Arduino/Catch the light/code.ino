                // variables 
//delay time
// pins
int ro = 8;
int rt = 2;
int go = 7;
int gt = 6;
int gh = 5;
int gf = 4;
int gi = 3;

// button
int btn = 11;
int btnP = 0;

// scoring 
int pos = 0;
int stat = 13;
int total = 0;
// code
void setup() {
 pinMode(ro, OUTPUT);
 pinMode(go, OUTPUT);
 pinMode(gt, OUTPUT);
 pinMode(gh, OUTPUT);
 pinMode(gf, OUTPUT);
 pinMode(gi, OUTPUT);
 // buzzer
 pinMode(rt, OUTPUT);
  // button
 pinMode(btn, INPUT);
 Serial.begin(9600);

 // score
 pinMode(stat, OUTPUT);
}

void loop() {
// refresh random speed
int randSpeed = random(50, 100); // SPEED OF BLINKING
int t = randSpeed;
  
// button code

/// lights loop
digitalWrite(ro, 200);
pos = 1; ///          storing position into variable
btnP = digitalRead(btn);
if(pos == 1 && btnP == 0){
  digitalWrite(stat, HIGH);
  delay(2000);
  digitalWrite(stat, LOW);
  total = total + 1;
  Serial.println("----------");
  Serial.println(total);
  Serial.println("----------");
  }
if (total == 5) {
  total = 0;
  analogWrite(ro, 1000);
  analogWrite(go, 1000);
  analogWrite(gt, 1000);
  analogWrite(gt, 1000);
  analogWrite(gf, 1000);
  analogWrite(gi, 1000);
  //
  delay(200);
  analogWrite(ro, 0);
  analogWrite(go, 0);
  analogWrite(gt, 0);
  analogWrite(gt, 0);
  analogWrite(gf, 0);
  analogWrite(gi, 0);
  delay(200);  
  analogWrite(ro, 1000);
  analogWrite(go, 1000);
  analogWrite(gt, 1000);
  analogWrite(gt, 1000);
  analogWrite(gf, 1000);
  analogWrite(gi, 1000);
  //
  delay(200);
  analogWrite(ro, 0);
  analogWrite(go, 0);
  analogWrite(gt, 0);
  analogWrite(gt, 0);
  analogWrite(gf, 0);
  analogWrite(gi, 0);

    }
Serial.println(btnP);
delay(t - 30);
analogWrite(ro, 0);
pos = 2; ///          storing position into variable
analogWrite(go, 800);
btnP = digitalRead(btn);


Serial.println(btnP);
delay(t);
analogWrite(go, 0);
analogWrite(gt, 800);
pos = 3; ///          storing position into variable
btnP = digitalRead(btn);


Serial.println(btnP);
delay(t);
analogWrite(gt, 0);
analogWrite(gh, 800);
pos = 4; ///          storing position into variable
btnP = digitalRead(btn);


Serial.println(btnP);
delay(t);
analogWrite(gh, 0);
analogWrite(gf, 800);
pos = 5; ///          storing position into variable
btnP = digitalRead(btn);


Serial.println(btnP);
delay(t);
analogWrite(gf, 0);
analogWrite(gi, 800);
pos = 6; ///          storing position into variable
btnP = digitalRead(btn);
delay(t);
analogWrite(gi, 0);

Serial.println(btnP);
delay(t);
analogWrite(rt, 0);




}
