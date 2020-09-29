void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  digitalWrite(13,HIGH); //prende der rojo
  digitalWrite(8, HIGH);  //verde izq prende 
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  
  delay(5000);  

  digitalWrite(8, LOW);
  digitalWrite(13,HIGH);   //prende der rojo
  digitalWrite(9, HIGH);    
  delay(1000);
  
  digitalWrite(9, LOW);
  digitalWrite(13, LOW);
   digitalWrite(10,HIGH);   //prende der rojo
  digitalWrite(11, HIGH);  //verde izq prende 
  delay(5000);  

  digitalWrite(11, LOW);
   digitalWrite(10,HIGH);   //prende der rojo
  digitalWrite(12, HIGH);    
  delay(1000);
}
