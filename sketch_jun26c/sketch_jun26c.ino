#include <DHT.h>
#include <DHT_U.h>

const int DHTPIN = 2;       // Define the digital pin in which the DHT11 is connected to.
const int DHTTYPE = DHT11;  // Define the type of DHT Sensor.
 
DHT dht(DHTPIN, DHTTYPE); // Define the DHT parameter to Initialize DHT sensor.

 
void setup() {
  Serial.begin(9600);
  dht.begin();         // Initialize the Serial Communication and the DHT Sensor.
}
 
void loop() {
  float t = dht.readTemperature(); // Read Temperature as Celsius (default)
  delay(3000);
  Serial.println(t);               // Return Temperature     
}
