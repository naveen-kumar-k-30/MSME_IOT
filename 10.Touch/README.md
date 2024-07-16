## Description
Control an LED using a touch sensor. The LED turns on when the sensor is touched and off when released.

## Components
Arduino Board\
Touch Sensor\
LED\
Resistor (220 ohms)\
Jumper wires

## Circuit Diagram
Connect the touch sensor's output to pin 2.\
Connect the positive leg of the LED to pin 13.\
Connect the negative leg of the LED to a 220-ohm resistor.\
Connect the other end of the resistor to the ground (GND).

## Algorithm
1.Initialize pin 2 as input and pin 13 as output.\
2.Read the state of the touch sensor.\
3.Turn on the LED if the sensor is touched.\
4.Turn off the LED if the sensor is not touched.\
5.Print the touch state to the serial monitor.\
6.Repeat the loop.
