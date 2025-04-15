const int ldrPin = A0;
const int ledPin = 9;

int ldrValue = 0;
int threshold = 500; // Nilai ambang batas, sesuaikan sesuai kebutuhan

void setup() {
  Serial.begin(9600);
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  ldrValue = analogRead(ldrPin);
  
  Serial.print("Nilai LDR: ");
  Serial.println(ldrValue);
  
  // Jika cahaya redup (nilai LDR tinggi), nyalakan LED
  if (ldrValue > threshold) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Cahaya redup - LED menyala");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("Cahaya terang - LED mati");
  }
  
  delay(2000);
}