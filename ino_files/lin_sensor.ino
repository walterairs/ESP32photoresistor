#define SENSOR_PIN 1

double calculate_y(double x) {
  return 3.817e+04 * exp(-0.005252 * x) + 574.2;
  }

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  
}
 
// the loop function runs over and over again forever
void loop(void) {

  



  int sensorValue = analogRead(SENSOR_PIN);

  double lin_value = calculate_y(sensorValue);

  Serial.println(lin_value, DEC);
  delay(100); // 3 milliseconds




}
