#include <arduReset.h>
 arduReset ardu;
 void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Initialized");
}

void loop() {
  
  ardu.reset();
  delay(200);
  // put your main code here, to run repeatedly:

}
