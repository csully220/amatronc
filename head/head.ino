#include <Servo.h>

#define EYES 3
#define RT_LIMIT 130
#define LT_LIMIT 55
#define MID 90
Servo eyes;
void setup() {
  // put your setup code here, to run once:
  eyes.attach(EYES);
  eyes.write(90);
}

void loop() {
  // put your main code here, to run repeatedly:
  // eyes right > 90
  // eyes left < 90
    eyes.write(RT_LIMIT);
    delay(1000);
    eyes.write(LT_LIMIT);
    delay(1000);
}
