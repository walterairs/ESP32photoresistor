//KY018 Photo resistor module
/*
 *  Here a simple sketch to test the upload of Ai-thinker ESP-12K.
 *  by Mischianti Renzo <https://mischianti.org>
 *
 *  https://mischianti.org/
 *
 */
 
#define SENSOR_PIN 1
int sensorValue = 0;
// the setup function runs once when you press reset or power the board

void setup() {
  Serial.begin(9600);
}
 
// the loop function runs over and over again forever
void loop() {
  sensorValue = analogRead(SENSOR_PIN);
  Serial.println(sensorValue, DEC);
  delay(3); // 3 milliseconds
}