# Cotton-Picking-Robot
Automated cotton-picking robot using Arduino and sensors to boost harvesting efficiency and reduce manual labor in agriculture.

## Table of Contents
- [Introduction](#introduction)
- [Key Features](#key-features)
- [Objective of the Work](#objective-of-the-work)
- [Hardware Introduction](#hardware-introduction)
- [Picking Device](#picking-device)
- [Navigation](#navigation)
- [Circuit Diagram](#circuit-diagram)
- [Working Demo](#working-demo)
- [Installation Guide](#installation-guide)
- [Future Scope](#future-scope)
- [Contributors](#contributors)
- [License](#license)

 
## Introduction
The process of growing and harvesting cotton, a valued natural fiber used in the textile sector, is known as cotton cultivation. Mostly in warm countries like the United States, China, India, Brazil, Pakistan it is grown. India produces cotton on around 12 million hectares, or one-third of the worldwide land used for cotton cultivation. Cotton reaches maturity in 160 days; harvest occurs over the final 60 days. 

Cotton-picking robots have been created to enable quicker and more effective harvesting. These robots can harvest cotton automatically without human input. Compared to traditional methods, they help to alleviate labor shortages and save time, hence speeding and more reliably the procedure. 

Making agriculture better depends much on technology. From seeding to harvesting, technology helps every process whether it is software-based gear or machinery. It enables good quality of the produce, boosts farming efficiency, and lowers skilled labor needs.

## Key Features
1. Navigation and mobility:
    * The navigation will be app controlled. This will help in manual control, and easy to use interface for the cotton-picking robot. 
2. IoT integration:
    * Real-time monitoring and control via connected devices.
3. Environment Variability:
    * Cotton fields exhibit diverse plant geometries, densities, and growth patterns, requiring highly adaptable systems.
    * Weather conditions such as wind and rain can disrupt robotic operations.
4. Economic constraints:
    * High initial costs hinder adoption in small-scale farms.
    * Limited availability of skilled technicians to maintain and operate these robots.
5. Sensing and Perception:
    * Cameras and Vision Systems: High-resolution cameras and image processing algorithms identify cotton bolls.
    * Machine Learning: Algorithms like convolutional neural networks (CNNs) enhance object detection in varying light and environmental conditions.
6. Actuation and Manipulation:
    * End-Effectors: Specialized grippers or suction-based tools pick the cotton without damaging the plant.
    * Robotic Arms: Multi-DOF (degrees of freedom) arms offer precision in reaching cotton bolls located at various angles.

## Objective Of The Work
1. Reduce Human Labor Dependence
2. Operate Continuously Without Needing Rest
3. Lower Operational Costs
4. Faster Return on Investment
5. Navigate Complex Terrains

## Hardware Introduction
1. Arduino UNO board x 1
2. L293D motor driver x 1
3. PWM servo motor driver
4. Servo motor x 4
5. Robot arm x 1
6. Gear motor x 2
7. Robot wheel x 3
8. DC battery holder x 1
9. Jumper wires
10. DC battery

## Picking Device
App controlled robotic arm will be used for the cotton-picking robot as the picking device.The app-controlled arm will give full control to the farmers for efficient picking. The design allows for various picking techniques based on environmental conditions, such as adjusting grip strength or changing angles for optical access.

![Image](https://github.com/user-attachments/assets/e8c6ec11-6274-4450-8b7a-580715e03782)

## Navigation
An app-controlled robot is a type of robot that can be operated remotely using a mobile application on a smartphone or tablet. This technology leverages Bluetooth, Wi-Fi, or Internet-based communication for controlling the robot's movements and functions. This method is being used due to the advantage of the operator having full control over the navigation and the picking and placing of the cotton balls.

![Image](https://github.com/user-attachments/assets/7fd15730-5f9f-4faf-aefd-8e112c21762f)

## Circuit Diagram

![Image](https://github.com/user-attachments/assets/7c0dd846-1b76-4cf4-9dac-792a3507489e)

1. Arduino UNO Connection with L293D Motor Shield
This circuit diagram demonstrates how four DC motors are connected to an Arduino UNO via an L293D Motor Shield for driving and navigation.
Key Components:
* Arduino UNO: The microcontroller that sends control signals.
* L293D Motor Shield: Controls the speed and direction of the motors.
* DC Motors (M1 to M4): Used for locomotion/navigation.
* 5V DC Power Supply: Provides external power to the motors.
Connections:
* Each motor (Motor 1–4) is connected to a pair of outputs on the motor shield (M1-A, M1-B, etc.).
* External power is supplied via a 5V battery. The jumper is removed to allow external power input, protecting the Arduino from overload.
* The shield is stacked directly on top of the Arduino UNO, using its I/O pins to receive commands.
Function:
* This setup allows the Arduino to control forward, backward, left, and right movements by adjusting motor speeds/directions.
* The robot’s movement can be controlled via Bluetooth or an app interface.

![image](https://github.com/user-attachments/assets/4d70ee4f-f317-4c55-94d7-44220a36bc38)

2.Arduino with Servo Driver and Robotic Arm
This circuit shows how the robotic arm and servo motors are controlled using an Arduino UNO and a PCA9685 PWM Servo Driver.
Key Components:
* Arduino UNO: Sends control signals to the servo driver.
* PCA9685 Servo Motor Driver: Enables control of multiple servo motors using I2C protocol.
* Servo Motors: Provide motion to different joints of the robotic arm.
* Robotic Arm: The end-effector for cotton picking.
* 5V DC Power Supply: Powers the servo motors.

Connections:
*The PCA9685 receives power (5V and GND) and I2C communication lines (SCL, SDA) from the Arduino.
*The servo motors are connected to the PCA9685 driver, which generates precise PWM signals for motion.
*The robotic arm’s movement (e.g., rotate, grip, lift) is handled by the servo motors based on user commands.

Function:
*This system allows fine control of the robotic arm using the mobile app or pre-programmed movements.
*The servos move in response to signals sent by the Arduino via the PWM driver, enabling cotton picking without damaging the plant.
