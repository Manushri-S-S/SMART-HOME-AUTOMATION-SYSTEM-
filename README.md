# Smart Home Automation System

A Bluetooth-controlled Smart Home Automation System built using Arduino Uno, HC-05 Bluetooth Module, and a Relay Module.

This project allows users to wirelessly control electrical appliances through a smartphone using Bluetooth communication. Commands sent from the mobile application are received by the HC-05 module and processed by the Arduino, which controls the relay to switch appliances ON and OFF.

## Features

- Wireless Bluetooth control
- Relay-based appliance switching
- Arduino Uno microcontroller
- HC-05 Bluetooth communication
- Easy-to-use and low-cost design

## Components Used

- Arduino Uno
- HC-05 Bluetooth Module
- 1-Channel Relay Module
- Bulb and Holder
- Jumper Wires
- Smartphone with Bluetooth Terminal App

## Circuit Connections

### HC-05 Connections

| HC-05 | Arduino |
|---------|---------|
| TXD | Pin 10 |
| RXD | Pin 11 |
| VCC | 5V |
| GND | GND |

### Relay Connections

| Relay | Arduino |
|---------|---------|
| IN | Pin 7 |
| VCC | 5V |
| GND | GND |

## Working Principle

1. Smartphone sends Bluetooth commands.
2. HC-05 receives the commands.
3. Arduino reads the received data using SoftwareSerial.
4. Relay switches the appliance ON or OFF.
5. The connected bulb responds accordingly.

## Commands

| Command | Action |
|----------|---------|
| 1 | Bulb ON |
| 2 | Bulb OFF |

## Technologies Used

- Arduino IDE
- Embedded C/C++
- SoftwareSerial Library
- Bluetooth Communication

- ## Challenges Faced

- Bluetooth pairing and connection issues
- Serial communication conflicts on pins 0 and 1
- Relay activation problems
- Pin 13 control conflicts
- Hardware troubleshooting and wiring verification

The issues were resolved using SoftwareSerial on pins 10 and 11 and moving relay control to pin 7.

## Learning Outcomes

- Serial Communication
- Bluetooth Interfacing
- Relay Control
- Embedded Systems Programming
- Hardware Troubleshooting and Debugging
