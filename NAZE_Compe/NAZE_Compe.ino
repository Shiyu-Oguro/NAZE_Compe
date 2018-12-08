#include <MsTimer2.h>
#define DIR_PIN 2
#define STEP_PIN 3
void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:
  MsTimer2::set(10, tick);/*[ms]*/
  MsTimer2::start();
  pinMode(DIR_PIN, OUTPUT);
  pinMode(STEP_PIN, OUTPUT);
  digitalWrite(DIR_PIN, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

}
void tick()//タイマで割り込む
{
  digitalWrite(STEP_PIN, HIGH);
  delay(0.1);//[ms]
  digitalWrite(STEP_PIN, LOW);
  Serial.println("Step");
}
