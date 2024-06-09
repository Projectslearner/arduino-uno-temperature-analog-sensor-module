/*
    Project name : Temperature Analog sensor module
    Modified Date: 09-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-temperature-analog-sensor-module
*/

const int sensorPin = A0; // Analog pin connected to the temperature sensor
float voltage, temperature;

void setup() 
{
  Serial.begin(9600);
}

void loop() {
  // Read the voltage from the sensor
  int sensorValue = analogRead(sensorPin);
  
  // Convert the sensor value to voltage
  voltage = sensorValue * (5.0 / 1023.0);
  
  // Convert the voltage to temperature (in Celsius)
  temperature = (voltage - 0.5) * 100.0;
  
  // Print the temperature to the serial monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
  
  delay(1000); // Wait for 1 second before taking the next reading
}
