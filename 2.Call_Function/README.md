## Description
A traffic light control system using LEDs to simulate a traffic signal with red, yellow, and green lights.

## Components
-Arduino Board \
-Red, Yellow, and Green LEDs \
-Resistors (220 ohms) \
-Jumper wires

## Circuit Diagram
-Connect the positive legs of the red, yellow, and green LEDs to pins 13, 12, and 11 respectively. \
-Connect the negative legs of the LEDs to 220-ohm resistors. \
-Connect the other ends of the resistors to the ground (GND).

## Algorithm
1.Initialize pins 13, 12, and 11 as outputs. \
2.Set red LED on, others off for 5 seconds. \
3.Set yellow LED on, others off for 2 seconds. \
4.Set green LED on, others off for 5 seconds. \
5.Repeat the loop.
