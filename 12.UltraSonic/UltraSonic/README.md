## Description
Control an LED using an ultrasonic sensor. The LED turns on if an object is within a certain distance.

## Components
Arduino Board\
Ultrasonic Sensor\
LED\
Resistor (220 ohms)\
Jumper wires

## Circuit Diagram
Connect the VCC of the ultrasonic sensor to 5V, GND to GND, Trig to pin 11, and Echo to pin 10.\
Connect the positive leg of the LED to pin 12.\
Connect the negative leg of the LED to a 220-ohm resistor.\
Connect the other end of the resistor to the ground (GND).

## Algorithm
Initialize pins 11 and 12 as outputs and pin 10 as input.\
Send a trigger pulse to the ultrasonic sensor.\
Measure the duration of the echo pulse.\
Calculate the distance based on the duration.\
Print the distance to the serial monitor.\
Turn on the LED if the distance is less than 25 cm.\
Turn off the LED if the distance is greater than or equal to 25 cm.\
Repeat the loop.
