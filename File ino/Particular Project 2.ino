void setup() {
  Serial.begin(9600);
  Serial.println("Inserisci il numero che desideri verificare:");
}

void loop() {
  if (Serial.available()) {
    int numero=Serial.parseInt();

    if (isPrime(numero)) {
      Serial.print("Il numero ");
      Serial.print(numero);
      Serial.println(" e' un numero primo");
    } 
    else {
      Serial.print("Il numero ");
      Serial.print(numero);
      Serial.println(" non e' un numero primo");
    }
    delay(1000);
    Serial.println("Inserisci il numero che desideri verificare:");
  }
}
  
bool isPrime(int numero) {
  if (numero<=1) {
    return false;
  }
  for (int i=2; i<=numero/2; ++i) {
    if (numero%i == 0) {
      return false;
    }
  }
  return true;
}