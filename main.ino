 #include <SoftwareSerial.h>

int anything = 0;

SoftwareSerial mySerialBT(3,4);

void setup() {
  Serial.begin(9600);
  mySerialBT.begin(9600);

}

void loop() {
    if (mySerialBT.available() != 0) {
      anything = mySerialBT.read();
      Serial.println(anything);
      if (anything == 97) {
        pinMode(10, OUTPUT);
        digitalWrite(10, 1);
        pinMode(11, OUTPUT);
        digitalWrite(11, 0);
        pinMode(12, OUTPUT);
        digitalWrite(12, 0);
        pinMode(13, OUTPUT);
        digitalWrite(13, 1);
      }
      if (anything == 98) {
        pinMode(10, OUTPUT);
        digitalWrite(10, 0);
        pinMode(11, OUTPUT);
        digitalWrite(11, 1);
        pinMode(12, OUTPUT);
        digitalWrite(12, 1);
        pinMode(13, OUTPUT);
        digitalWrite(13, 0);
      }
      if (anything == 99) {
        pinMode(10, OUTPUT);
        digitalWrite(10, 1);
        pinMode(11, OUTPUT);
        digitalWrite(11, 0);
        pinMode(12, OUTPUT);
        digitalWrite(12, 1);
        pinMode(13, OUTPUT);
        digitalWrite(13, 0);
      }
      if (anything == 100) {
        pinMode(10, OUTPUT);
        digitalWrite(10, 0);
        pinMode(11, OUTPUT);
        digitalWrite(11, 1);
        pinMode(12, OUTPUT);
        digitalWrite(12, 0);
        pinMode(13, OUTPUT);
        digitalWrite(13, 1);
      }
      if (anything == 101) {
        pinMode(10, OUTPUT);
        digitalWrite(10, 0);
        pinMode(11, OUTPUT);
        digitalWrite(11, 0);
        pinMode(12, OUTPUT);
        digitalWrite(12, 0);
        pinMode(13, OUTPUT);
        digitalWrite(13, 0);
      }
    }

} 
