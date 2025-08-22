# Craxy_AVS_Women_Safety_Device

## Team Details  
- Team Name: Craxy AVS
- Team Members: Anjali Sahu, Sejal Mudaliar, Vaibhav Kumar Sahu
- [📂 View the Presentation](./presentation/my_slides.pptx)

   
## Problem Statement  
Women continue to face harassment and unsafe situations, and existing solutions like mobile apps are often slow, bulky, or unreliable in emergencies. There is a need for a compact, affordable, and easy-to-use device that can instantly send SOS alerts and share real-time location for immediate help.

## Project Description  
The Women Safety Device is an IoT-based compact wearable that provides quick help during emergencies. It integrates GPS and GSM technology with an SOS alert system to ensure distress signals and live location are instantly shared with emergency contacts. Designed to be discreet, affordable, and easy to use, the device empowers women with confidence and independence in unsafe situations.
### Features
The device includes a one-click SOS alert system, real-time GPS tracking, and GSM communication that can instantly send SMS or calls without requiring internet access. Its compact and lightweight design makes it comfortable to wear daily, while the use of affordable components ensures accessibility for a wider audience.
### Workflow
When the user presses the SOS button, the Arduino Nano microcontroller processes the emergency command. The GPS module then retrieves the live location, and the GSM module immediately sends an SMS or initiates a call to pre-configured emergency contacts, ensuring fast and reliable alerts.
### Modules Used
The core modules of the device include the Arduino Nano as the microcontroller, a GPS module for live location tracking, and a GSM module for communication. A rechargeable battery powers the system, ensuring portability and longer operational life.
### Unique Approach
Unlike many mobile-based safety apps that depend on internet connectivity, this device works independently through GSM communication. Its small, discreet design makes it more practical than bulky gadgets, while the focus on affordability and everyday usability ensures it can be adopted widely to enhance women’s safety.

## Tech Stack Used  
### Hardware Components
The device is built using Arduino Nano as the microcontroller, a GPS module (Neo-6M) for live location tracking, and a GSM module (SIM800L) for communication through SMS and calls. A rechargeable lithium-ion battery is used as the power source, making the device portable and long-lasting.
### Software & Programming
The system is programmed using Arduino IDE with Embedded C/C++, enabling smooth integration of GPS and GSM modules. AT Commands are used to control GSM communication, ensuring instant SOS alerts and location sharing.
### Development Tools
The project uses Arduino IDE for coding and testing, along with serial monitor debugging tools to verify GPS and GSM outputs. Circuit design and testing were carried out on breadboard and simulation tools before hardware integration.
### Libraries Used
Essential libraries such as SoftwareSerial.h (for serial communication), TinyGPS++ (for parsing GPS data), and GSM.h (for GSM functionalities) were used to simplify development and improve reliability.

## Installation & Usage  
### Installation Steps
Install the Arduino IDE on your computer.
Connect the Arduino Nano board via USB cable.
Install required libraries in Arduino IDE (e.g., SoftwareSerial.h, TinyGPS++, GSM.h).
Connect hardware components:
GPS module → Arduino Nano (TX/RX pins)
GSM module → Arduino Nano (TX/RX pins + SIM card inserted)
Battery → Power pins of Arduino Nano
Upload the program code to Arduino Nano using Arduino IDE.
### Usage Steps
Power on the device with the rechargeable battery.
Insert a valid SIM card into the GSM module.
Wait for the GPS module to lock onto satellites (LED indicator will stabilize).
Press the SOS button to trigger an alert.
The Arduino Nano processes the signal, fetches location via GPS, and sends an SMS/call to emergency contacts using GSM.
Emergency contacts receive the alert with the user’s real-time location link.

## Live Demo / Deployment  
Live Demo - Please find the attached video in the repository (Live_Demo.mp4)
Code for the Arduino nano - please find the code in the repository (sketch_aug21a.ino)

## Future Enhancements  
Mobile App Integration: Add a smartphone app to provide real-time location tracking, alerts, and monitoring.
AI-Based Threat Detection: Use sensors and AI to detect unusual movements, panic situations, or sudden falls.
Voice Activation: Enable SOS triggering through voice commands for hands-free operation.
Integration with Police/Emergency Services: Directly alert local authorities or helplines for quicker response.
Smaller & Smarter Design: Miniaturize the device further, add waterproofing, and improve durability.
Cloud Storage: Store emergency logs and tracking history for better data access and analysis.
Health Monitoring Features: Include sensors to track vitals (heart rate, pulse) and send alerts in medical emergencies.
