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
  digitalWrite(11, HIGH); // S1 con luz verde
  digitalWrite(13, LOW);  // S1 luz roja apagada
  digitalWrite(10, LOW);  // S1 luz azul apagada
  
  digitalWrite(9, HIGH);  // S2 con luz roja encendida
  digitalWrite(6, HIGH);  // s2 luz azul encendida
  
  digitalWrite(5, HIGH);  // s3 con luz roja encendida
  digitalWrite(2, HIGH);  // s3 luz azul encendida
  delay(5000); // Esperamos 5 segundos

  // S1 cambia a Amarillo
  digitalWrite(11, LOW); // S1 luz verde apagada
  digitalWrite(12, HIGH); // S1 luz amarilla encendida
  delay(2000); // Esperamos 2 segundos
  digitalWrite(12, LOW); // S1 luz amarilla apagada
  digitalWrite(13, HIGH); // S1 luz roja encendida
  digitalWrite(10, HIGH); // S1 luz azul encendida

  // ==========================================
  // FASE 2: SEMÁFORO 2 EN VERDE
  // ==========================================
  digitalWrite(9, LOW); // S2 luz roja apagada
  digitalWrite(6, LOW);   // S2 luz azul apagada
  digitalWrite(7, HIGH);  // S2 luz verde encendida
  delay(5000); // Esperamos 5 segundos

  // S2 cambia a Amarillo
  digitalWrite(7, LOW); // S2 luz verde apagada
  digitalWrite(8, HIGH); // S2 luz amarilla encendida
  delay(2000); // Esperamos 2 segundos
  digitalWrite(8, LOW); // S2 luz amarilla apagada
  digitalWrite(9, HIGH); // S2 luz roja encendida
  digitalWrite(6, HIGH); // S2 luz azul encendida

  // ==========================================
  // FASE 3: SEMÁFORO 3 EN VERDE
  // ==========================================
  digitalWrite(5, LOW);   // S3 luz roja apagada
  digitalWrite(2, LOW);   // S3 luz azul apagada
  digitalWrite(3, HIGH);  // S3 luz verde encendida
  delay(5000); // Esperamos 5 segundos

  // S3 cambia a Amarillo
  digitalWrite(3, LOW); // S3 luz verde apagada
  digitalWrite(4, HIGH); // S3 luz amarilla encendida
  delay(2000); // Esperamos 2 segundos
  digitalWrite(4, LOW); // S3 luz amarilla apagada
  digitalWrite(5, HIGH);  // S3 luz roja encendida
  digitalWrite(2, HIGH); // S3 luz azul encendida
}

