const int trigpin = 15;
const int echopin = 2;
void setup() {
  Serial.begin(115200);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);}
void loop() {
  long duration, distance;
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  duration = pulseIn(echopin, HIGH);
  distance = duration * 0.034 / 2;
  if (distance == 0) {
    Serial.println("Tidak ada objek terdeteksi.");
  } else {
    Serial.print("Jarak: ");
    Serial.print(distance);
    Serial.println(" cm");}
  delay(500);}
