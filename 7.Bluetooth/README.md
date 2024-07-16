## Description
Control an LED using commands received via a Bluetooth module.

## Components
  Arduino Board \
  Bluetooth Module \
  LED \
  Resistor (220 ohms) \
  Jumper wires

## Circuit Diagram
  Connect the Bluetooth module's TX to the Arduino's RX and RX to the Arduino's TX. \
  Connect the positive leg of the LED to pin 13. \
  Connect the negative leg of the LED to a 220-ohm resistor. \
  Connect the other end of the resistor to the ground (GND).

## Algorithm
  Initialize pin 13 as output. \
  Begin serial communication. \
  Read data from the Bluetooth module. \
  Turn on the LED if the received data is '1'. \
  Turn off the LED if the received data is '0'. \
  Repeat the loop.
