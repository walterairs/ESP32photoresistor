//KY018 Photo resistor module
 
//int sensorPin = GPIO19; // select the input pin for the potentiometer
//int ledPin = GPIO20; // select the pin for the LED
//int sensorValue = 0; // variable to store the value coming from the sensor
//void setup() {
//  pinMode(ledPin, OUTPUT);
//  Serial.begin(9600);
//}
//void loop() {
// sensorValue = analogRead(sensorPin);
//  digitalWrite(ledPin, HIGH);
//  delay(sensorValue);
//  digitalWrite(ledPin, LOW);
//  delay(sensorValue);
//  Serial.println(sensorValue, DEC);
//}

/*
 *  Here a simple sketch to test the upload of Ai-thinker ESP-12K.
 *  by Mischianti Renzo <https://mischianti.org>
 *
 *  https://mischianti.org/
 *
 */
 
#define LED_BUILTIN 2
#define SENSOR_PIN 3
int sensorValue = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}
 
// the loop function runs over and over again forever
void loop() {
  sensorValue = analogRead(SENSOR_PIN);
  Serial.println(sensorValue, DEC);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  //test
  

  //lets write the values into a file
  File file = SD.open("/data.txt", FILE_WRITE);
  if (file) {
    for (int i = 0; i < 1000; i++) {
      sensorValue = analogRead(SENSOR_PIN);
      file.println(sensorValue);
      file.close();
    }
  }
  else {
    Serial.println("error opening file");
  }
}