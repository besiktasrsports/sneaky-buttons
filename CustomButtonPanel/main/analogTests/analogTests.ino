int x;
void setup() {
  // put your setup code here, to run once:
pinMode(A0, INPUT_PULLUP);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 x = digitalRead(A0); 
  Serial.println(x);
}
