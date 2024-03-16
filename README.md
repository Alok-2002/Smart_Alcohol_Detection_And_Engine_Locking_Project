# Smart Alcohol Detection and Engine Locking System

## Project Overview

The `Smart Alcohol Detection and Engine Locking System` is an innovative project aimed at enhancing road safety by preventing alcohol-impaired driving. This repository contains the complete details, documentation, and source code for building and implementing the system.

## Project Team

- [Alok Sharma](https://linkedin.com/in/alok-sharma2002-)
- [Sanskriti Yadav](https://linkedin.com/in/)

We, `Alok Sharma` and `Sanskriti Yadav`, collaborated on this project as a Minor Project during our college studies.

## Table of Contents

- [Aim](#aim)
- [Components Required](#components-required)
- [Circuit Diagram](#circuit-diagram)
- [How It Works](#how-it-works)
- [Project Images](#project-images)
- [Advantages](#advantages)
- [Results](#results)
- [Project Resources](#project-resources)
  - [Project Video](#project-video)
  - [Report File](#report-file)
  - [Source Code](#source-code)
- [License](#license)

## Aim

The primary goal of this project is to create a reliable and user-friendly system that promotes responsible driving behavior. The system detects alcohol levels in the air using an MQ-3 Alcohol Sensor and temporarily immobilizes the vehicle's engine if alcohol is detected, preventing potential accidents due to impaired driving.

## Components Required

To build the "Smart Alcohol Detection and Engine Locking System," you will need the following components:

1. `Arduino Nano`
2. `MQ-3 Alcohol Sensor`
3. `DC Power Booster Module`
4. `DC Gear Motor` (used as a demonstration of a car)
5. `Charging Module`
6. `Lithium-Ion Battery`
7. `Relay Module (5V)`
8. `LED`
9. `Buzzer`
10. `SPST Switch`
11. `Connecting Wires` or `Jumper Wires`
12. `Arduino IDE` (to program `Arduino Nano`)

Additionally, materials like Cardboard or a Box are used for the overall structure, offering adaptability in design.


## Circuit Diagram


![image](https://github.com/Alok-2002/Smart_Alcohol_Detection_And_Engine_Locking_Project/assets/93814546/4ad73bef-16c9-4ad9-853e-de6b30eabbf6)


## How It Works

The operational mechanism of the "Smart Alcohol Detection and Engine Locking System" involves several key steps. Follow the detailed guide in the [How It Works](#how-it-works) section to understand the system's functionality, from power supply initiation to real-time alerts and temporary system pauses.

The 'Smart Alcohol Detection and Engine Locking System' operates by integrating advanced alcohol detection technology into the vehicle's control system. This innovation allows real-time adjustments to the engine's operation based on alcohol detection, ensuring safer driving conditions. Here's a concise overview of the system's functioning:

1. **Power Supply Initiation:**
   - System begins with turning on the power supply.
   - Rechargeable battery connected to charging module via C-type USB cable for versatile and portable power.
   - DC power booster module ensures compatibility with Arduino Nano.

2. **System Control Switch:**
   - User-friendly switch controls the system's power supply.
   - Easy on/off functionality for user control.

3. **DC Gear Motor and Relay Operation:**
   - DC gear motor connected to Arduino relay interface.
   - Relay serves as intermediary, receiving Arduino signals to control the DC gear motor.

4. **Visual and Auditory Indicators:**
   - Buzzer and LED linked directly to Arduino for real-time alerts.
   - Activated upon alcohol detection for immediate and unmistakable signals.
   - Double-alert feature enhances security and improves the detection process.

5. **Alcohol Detection Process:**
   - MQ-3 alcohol sensor positioned to detect alcohol concentrations in the air.
   - Continuous monitoring for variations in alcohol levels.

6. **Data Processing by Arduino:**
   - Arduino processes information from MQ-3 sensor using complex algorithms.
   - Detects alcohol percentage as the system's control center.

7. **Relay Activation and Motor Stopping:**
   - Relay receives orders from Arduino based on analyzed data.
   - Stops DC gear motor operation in response to alcohol detection for crucial safety.

8. **Real-time Alert:**
   - User receives simultaneous visual (LED) and auditory (buzzer) alerts.
   - Dual-alert system ensures rapid and effective safety precautions.

9. **Temporary System Pause:**
   - System temporarily pauses when alerts are activated and motor is stopped.
   - Allows user to acknowledge detected alcohol levels.
   - Resumes regular functioning after a short break, enabling the DC gear motor to run again.


## Project Images

![project1](https://github.com/Alok-2002/Smart_Alcohol_Detection_And_Engine_Locking_Project/assets/93814546/b82caa7e-56ba-4f24-934a-2efdf75e81c1)



## Advantages

The "Smart Alcohol Detection and Engine Locking System" offers the following advantages:

- Real-time alcohol detection for immediate awareness.
- Dual-alert system (LED and buzzer) for enhanced safety.
- Temporary engine immobilization to prevent drunk driving.
- User-friendly interface with an easy-to-use control switch.
- Rechargeable battery for portability and convenience.


## Results

We, `Alok Sharma` and `Sanskriti Yadav`, are excited to announce the successful development of the `Smart Alcohol Detection and Engine Locking System`. This repository includes all the details, documentation, and source code required to replicate the system. By seamlessly integrating technology and safety measures, this project represents a significant step forward in addressing the critical issue of alcohol consumption and vehicular operation. We believe that our project encourages responsible driving practices and contributes to improving overall road safety standards.

## Project Resources

### Project Video

Watch the project in action through our [Project Video](https://drive.google.com/file/d/1zANiqAPzrqs5evM-ASB2T4bQVfZGgP5V/view?usp=sharing) to get a visual understanding of the system's functionality.

### Report File

Refer to our detailed [Report File](https://drive.google.com/file/d/1tx5jpaTaQ4W__BgLvbHd8hNuxtNZIiqy/view?usp=drive_link) for comprehensive documentation, including project background, methodology, results, and discussions.

### Source Code

Access the [Source Code](Code.ino) to explore the Arduino programming and understand how each component is utilized in the system.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use, modify, and distribute the code as per the terms of the license.


## Contact Project's Developer's
- [Alok Sharma](mailto:sharmaalok02gwl@gmail.com)
- [Sanskriti Yadav](mailto:sanskriti2377@gmail.com)


Feel free to explore the repository for detailed instructions and resources to build your own Smart Alcohol Detection and Engine Locking System. If you have any questions or feedback, please don't hesitate to reach out.

Happy building and stay safe on the roads!
