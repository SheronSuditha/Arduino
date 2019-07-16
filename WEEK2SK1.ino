void signalS() {
  for(int c=0;c<3;c++){
      digitalWrite(LED_BUILTIN, HIGH);
      delay(500);
      digitalWrite(LED_BUILTIN, LOW);
      delay(1000);
  }
}

void signalO() {
  for(int c=0;c<3;c++){
      digitalWrite(LED_BUILTIN, HIGH);
      delay(3000);
      digitalWrite(LED_BUILTIN, LOW);
      delay(500);
  }
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  
}

void loop() {
  signalS();
  signalO();
  signalS();
}
