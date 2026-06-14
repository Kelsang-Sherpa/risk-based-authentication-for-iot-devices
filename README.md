# Risk-Based Authentication for IoT Devices Using ESP32

## Project Overview

This project presents a risk-based authentication system for IoT devices using an ESP32 microcontroller. The system evaluates user context using sensor data, such as proximity and touch input, to classify access attempts into different risk levels.

Low-risk scenarios allow automatic access, while high-risk situations require additional verification. An RGB LED provides real-time feedback on authentication status.

## Features

- Context-aware authentication
- Risk-based access control
- ESP32 embedded system
- Ultrasonic distance sensing
- Touch-based verification
- RGB LED status indication
- IoT security implementation

## Hardware Components

- ESP32 Development Board
- HC-SR04 Ultrasonic Sensor
- RGB LED Module
- Touch Sensor / Push Button
- Jumper Wires
- USB Cable

## System Workflow

1. Initialize ESP32 and sensors.
2. Detect user presence using ultrasonic sensor.
3. Evaluate risk level.
4. Low-risk access is granted automatically.
5. High-risk access requires touch verification.
6. RGB LED indicates authentication status.

## Applications

- IoT Device Security
- Smart Home Authentication
- Access Control Systems
- Embedded Security Research

## Future Work

Future development includes integrating machine learning models such as TensorFlow Lite to enable adaptive authentication based on user behavior.

## Poster

See the project poster included in this repository.
[RBAPOSTER.pdf](https://github.com/user-attachments/files/28922528/RBAPOSTER.pdf)


## Hardware Setup Images

<img width="313" height="238" alt="image" src="https://github.com/user-attachments/assets/4108ec28-a1f3-4668-9eba-ad9cfde0262e" />
<img width="310" height="267" alt="image" src="https://github.com/user-attachments/assets/3177ea14-f48f-4458-8a58-e35d689a503a" />
<img width="269" height="263" alt="image" src="https://github.com/user-attachments/assets/05454fff-fbb0-4451-b3e4-994adaf26d25" />


## Software Design Diagram

<img width="457" height="528" alt="image" src="https://github.com/user-attachments/assets/6930e2fa-4fc9-4c6b-bc8d-c2303f3b30ef" />


## Real-Time System Output

The Serial Monitor displays live authentication decisions based on proximity and touch sensor input.

Example runtime output:

Distance: 171.38  Touch: 0  -> Step-Up Verified (Access Granted)

Distance: 171.31  Touch: 1  -> High Risk (Access Denied)
<img width="1024" height="640" alt="image" src="https://github.com/user-attachments/assets/4d43ca61-0e9a-4992-9957-ffd530abd48b" />
ESP32-based risk-aware authentication system using ultrasonic distance sensing and touch verification to classify access attempts as low-risk or high-risk and provide real-time access control feedback.


## Author

Kelsang Chhoden Sherpa  
Computer Engineering Technology  
New York City College of Technology (CUNY)

Mentor: Professor Farrukh Zia
