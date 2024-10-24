const int buttonpin = 26;
void setup() {
  pinMode(buttonpin, INPUT);
  Serial.begin(9600);}
void loop() {
  int buttonstate = digitalRead(buttonpin);
  Serial.print("Tombol ditekan: ");
  if (buttonstate == HIGH) {
    Serial.println("YA");
  }else{
    Serial.println("TIDAK");}
delay(100);}
