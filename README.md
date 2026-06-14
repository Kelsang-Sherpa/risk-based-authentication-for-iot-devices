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


## Author

Kelsang Chhoden Sherpa  
Computer Engineering Technology  
New York City College of Technology (CUNY)

Mentor: Professor Farrukh Zia
