int diods[6];
bool rn = false;
void setup() {
  rn = false;
  Serial.begin(9600);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  for (int i = 2; i < 8; i++)
    pinMode(i, OUTPUT);
  for (int i = 2; i < 8; i++){
    digitalWrite(i, HIGH);
    delay(1000);
    digitalWrite(i, LOW);
  }
  digitalWrite(7, LOW);
  for (int i = 6; i > 1; i--){
    digitalWrite(i, HIGH);
    delay(1000);
    digitalWrite(i, LOW);
  }
  digitalWrite(5, HIGH);
}

void cycle(){
  if (rn){

  }
}

void loop() {
  if ((digitalRead(10) == HIGH) || (rn)){
    digitalWrite(4, HIGH);
  }
  else{
    digitalWrite(4, LOW);
  }
  
  if ((digitalRead(9) == HIGH) || (rn)){
    digitalWrite(7, HIGH);
  }
  else{
    digitalWrite(7, LOW);
  }
  if ((digitalRead(8) == HIGH) || (rn)){
    digitalWrite(6, HIGH);
  }
  else{
    digitalWrite(6, LOW);
  }

}
