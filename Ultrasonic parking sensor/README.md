# Ultrasonic Parking Sensor (HC-SR04)

This project simulates a parking assistance system using the HC-SR04 ultrasonic sensor in Tinkercad.

## ⚙️ Components used:
- Arduino Uno  
- HC-SR04 Ultrasonic Sensor  
- Buzzer  
- 2 LEDs: one green and one red, used as visual indicators  
- 2 resistors of 0.5 kiloOhms  
- Breadboard  

## 💡 How it works:
The sensor measures the distance to an obstacle in front of the vehicle and emits sound signals based on that distance.

- When the object is far: the buzzer is off and the green LED is on.  
- When the object gets closer: the buzzer beeps at a higher frequency (2000 Hz) and the red LED is on.

## 📸 Circuit Image:
[Circuit Image](Ultrasonic-sensor.png).

## 📄 Source Code:
[Click here to view the Arduino code](Ultrasonic-Sensor.ino)

