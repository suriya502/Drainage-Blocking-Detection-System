# Drainage-Blocking-Detection-System
Project #1

Project Name: "Drainage Blocking Detection System".

Objective:
The objective of this project is to detect possible drainage blockage by monitoring the water level using a water sensor and displaying warning messages through an LCD display and LED indicator.

Components Used:
Arduino Nano,Water Level Sensor,16×2 LCD,Display with I2C Module,LED,Resistor,Breadboard,Jumper Wires,USB Cable. 

Procedure:
First, an Arduino Nano was placed on the breadboard to build the main control circuit.
Then, the required components such as the water level sensor, LCD display, LED, and resistor were connected step by step with jumper wires.The LCD display was connected to the Arduino to show the drainage status and sensor readings.The LED indicator was connected to Digital Pin 5 of the Arduino Nano.The positive terminal of the LED was connected to Pin 5.The negative terminal of the LED was connected to a resistor, and the resistor was connected to the GND pin.The water sensor connections were completed as follows:
The S (Signal) pin of the water sensor was first connected to an empty row of the breadboard.
A resistor was added in the circuit for stable signal reading.After that, the signal line was connected to the A0 analog pin of the Arduino Nano.
The VCC and GND pins of all components were connected properly to the power rails of the breadboard.After completing all hardware connections, the program code for the Drainage Blocking Detection System was written on the laptop using the Arduino IDE.Finally, the code was uploaded to the Arduino Nano through a USB cable, and the system was tested successfully.

Working Principle:
The water level sensor continuously measures the water level inside the drainage system.
When the sensor value exceeds a predefined threshold (650), the system considers it a possible drainage blockage or overflow condition.
The LED turns ON as a warning signal.
The LCD display shows:
“Drain danger!”
“Risk overflow”
If the water level remains below the threshold:
The LED stays OFF.
The LCD displays the current water level value.
If no significant sensor activity is detected for 3 seconds, the LCD returns to the default display:
“Detection”
“System”

Conclusion:
The Drainage Blocking Detection System successfully monitors water levels and provides warning indications during possible drainage blockage conditions. The project demonstrates the practical use of Arduino Nano, sensors, LCD displays, and LED indicators in real-time monitoring systems.
