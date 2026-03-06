// C++ code
//
void setup() {
  // Configuramos todos los pines del 2 al 13 como salida
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // ==========================================
  // FASE 1: SEMÁFORO 1 EN VERDE
  // ==========================================
  digitalWrite(11, HIGH); 
  digitalWrite(13, LOW);  
  digitalWrite(10, LOW);  
  
  digitalWrite(9, HIGH);  
  digitalWrite(6, HIGH);  
  
  digitalWrite(5, HIGH);  
  digitalWrite(2, HIGH);  
  delay(5000);

  // S1 cambia a Amarillo
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH); 
  digitalWrite(10, HIGH); 
}

