

void setup() {

  

  Serial.begin(9600);
  

}

void loop() {
  while(Serial.available())
  {

    int a = (int)Serial.read();

    Serial.println(a);
    
    
  }

}
