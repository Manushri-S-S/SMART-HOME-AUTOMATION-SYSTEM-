#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11);

char val;

void setup() {

  pinMode(7, OUTPUT);

  digitalWrite(7, HIGH);

  BT.begin(9600);

}

void loop() {

  if (BT.available()) {

    val = BT.read();

    if (val == '1') {

      digitalWrite(7, LOW);

    }

    else if (val == '2') {

      digitalWrite(7, HIGH);

    }
  }
}
