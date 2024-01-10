#define pinPIR 9

void setup() {
  pinMode(pinPIR, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool valorPIR = digitalRead(pinPIR);

  if (valorPIR) {
    Serial.println("A"); // Envia 'A' quando detectado
  } else {
    Serial.println("B"); // Envia 'B' quando não detectado
  }
  delay(1000); // Aguarda 1 segundo antes da próxima leitura
}
