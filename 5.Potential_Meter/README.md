## Description
Control two LEDs using a potentiometer. The LEDs turn on based on the potentiometer's position.

## Components
-Arduino Board \
-Potentiometer \
-2 LEDs \
-Resistors (220 ohms) \
-Jumper wires

## Circuit Diagram
-Connect the middle pin of the potentiometer to A0, and the other two pins to 5V and GND. \
-Connect the positive legs of the LEDs to pins 13 and 12 respectively. \
-Connect the negative legs of the LEDs to 220-ohm resistors. \
-Connect the other ends of the resistors to the ground (GND).

## Algorithm
1.Initialize A0 as input and pins 13, 12 as outputs. \
2.Read the potentiometer value. \
3.Turn on LED on pin 13 if the value is between 500 and 700. \
4.Turn on LED on pin 12 if the value is between 700 and 1000. \
5.Turn off both LEDs if the value is greater than 1000. \
6.Print the potentiometer value to the serial monitor. \
7.Repeat the loop.
