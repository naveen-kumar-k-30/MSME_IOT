## Description
Control an LED using an IR sensor. The LED turns on when the sensor detects an object and turns off when it doesn't.

## Components
-Arduino Board \
-IR Sensor \
-LED \
-Resistor (220 ohms) \
-Jumper wires

## Circuit Diagram
-Connect the VCC of the IR sensor to 5V, GND to GND, and OUT to pin 2. \
-Connect the positive leg of the LED to pin 13. \
-Connect the negative leg of the LED to a 220-ohm resistor. \
-Connect the other end of the resistor to the ground (GND).

## Algorithm
1.Initialize pin 2 as an input and pin 13 as an output. \
2.Read the IR sensor state. \
3.Turn on the LED if the sensor is activated. \
4.Turn off the LED if the sensor is not activated. \
5.Print the status to the serial monitor. \
6.Repeat the loop.
