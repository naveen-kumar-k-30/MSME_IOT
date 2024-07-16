## Description
Control the brightness of an LED based on the water level detected by a water level sensor.

## Components
  -Arduino Board \
  -Water Level Sensor \
  -LED \
  -Resistor (220 ohms) \
  -Jumper wires \

## Circuit Diagram
  -Connect the water level sensor to A0. \
  -Connect the positive leg of the LED to pin 13. \
  -Connect the negative leg of the LED to a 220-ohm resistor. \
  -Connect the other end of the resistor to the ground (GND). \

## Algorithm
  1.Initialize A0 as input and pin 13 as output. \
  2.Read the water level sensor value. \
  3.Set the LED to full brightness if the value is >= 500. \
  4.Map the sensor value to LED brightness if the value is < 500. \
  5.Print the sensor value to the serial monitor. \
  6.Repeat the loop.
