# Temperature Measurement with Analog Sensor Module

#### Project Overview

This project demonstrates how to measure temperature using an analog temperature sensor module with an Arduino Uno. The analog sensor provides a voltage output proportional to the ambient temperature, which is then converted to Celsius temperature and displayed on the serial monitor.

#### Components Needed

1. **Arduino Uno**
2. **Analog Temperature Sensor Module**
3. **Jumper Wires**


### Block Diagram


#### Pin Connections

- **Temperature Sensor Module:**
  - Analog Output: Connect to Arduino analog pin A0
  - VCC: Connect to Arduino 5V
  - GND: Connect to Arduino GND

#### Instructions

1. **Set Up the Circuit:**
   - Connect the analog output of the temperature sensor module to Arduino analog pin A0.
   - Connect the VCC pin of the sensor module to Arduino 5V.
   - Connect the GND pin of the sensor module to Arduino GND.

2. **Initialize the System:**
   - Begin serial communication at a baud rate of 9600 in the setup function.

3. **Read Sensor Values:**
   - Read the analog value from the sensor using the `analogRead()` function.
   - Convert the analog value to voltage using the formula `voltage = sensorValue * (5.0 / 1023.0)`.

4. **Convert to Temperature:**
   - Convert the voltage to temperature in Celsius using the formula `temperature = (voltage - 0.5) * 100.0`.
   - Adjust the offset value (0.5) and scaling factor (100.0) based on the characteristics of your sensor.

5. **Display Temperature:**
   - Print the temperature to the serial monitor with appropriate units.
   - Monitor the serial monitor to observe real-time temperature readings.

#### Applications

- **Environmental Monitoring:** Measure ambient temperature in various environments.
- **Home Automation:** Integrate temperature sensing into home automation systems for climate control.
- **DIY Projects:** Use temperature sensors in DIY projects requiring temperature monitoring and control.

#### Notes

- Ensure proper calibration of the temperature sensor for accurate temperature measurements.
- Handle the sensor carefully to avoid damage or incorrect readings.

---

🌐 [projectslearner.com](https://projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Made for you with ❣️ from ProjectsLearner