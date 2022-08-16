int RelayCW1 = 7;
int RelayCW2 = 8;
int RelayCCW2 = 9;
int RelayCCW1 = 10;
const int UP = 5;
const int DOWN = 3; 
int UPState = 0;
int DOWNState = 0;

void setup() {
  pinMode(RelayCW1, OUTPUT);
  pinMode(RelayCW2, OUTPUT);
  pinMode(RelayCCW1, OUTPUT);
  pinMode(RelayCCW2, OUTPUT);
  pinMode(DOWN, INPUT);
  pinMode(UP, INPUT);
  digitalWrite(RelayCW2, HIGH);
  digitalWrite(RelayCCW2, HIGH);
  digitalWrite(RelayCW1, HIGH);
  digitalWrite(RelayCCW1, HIGH);
}
void loop(){
   
   UPState = digitalRead(UP);
   DOWNState = digitalRead(DOWN);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (UPState == HIGH) {
    // turn LED on:
    digitalWrite(RelayCW1, LOW);
    digitalWrite(RelayCW2, LOW);
    digitalWrite(RelayCCW2, HIGH);
    digitalWrite(RelayCCW1, HIGH);
  } 
  if (DOWNState == HIGH){
    digitalWrite(RelayCW1, HIGH);
    digitalWrite(RelayCW2, HIGH);
    digitalWrite(RelayCCW2, LOW);
    digitalWrite(RelayCCW1, LOW);
  }
  if (DOWNState == LOW && UPState == LOW){
    digitalWrite(RelayCW2, HIGH);
    digitalWrite(RelayCCW2, HIGH);
    digitalWrite(RelayCW1, HIGH);
    digitalWrite(RelayCCW1, HIGH);
  }
}
