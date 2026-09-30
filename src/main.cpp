#include <Arduino.h>

void setup() {
  // Inicializa a comunicação série a 115200 baud
  Serial.begin(115200);
  
  // Aguarda a inicialização da porta USB CDC (útil para ESP32-S3)
  delay(1000); 
  
  Serial.println("ESP32-S3 iniciado com sucesso!");
}

void loop() {
  // O teu código principal vem aqui
  Serial.println("A executar loop...");
  delay(2000);
}
