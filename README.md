Our gas detection system aims to provide an uncomplicated yet robust solution for gas detection, designed to focus on simplicity and accessibility. The system functions as follows: when gas is detected by the gas sensor, a red LED lights up, and a green LED means no gas is detected. Our main goals consist of affordability, versatility, and widespread adaptation.

# Hardware Requirements

* OSEPP Arduino microcontroller
* MQ2 sensor
* Two 100-ohm resistors
* Red LED
* Green LED
* Breadboard
* Jumper wires

# Software Requirements



# Setup and Configuration



# Code Explanation



# Usage



# Schematic

The schematic of our gas detection system entails a 9V battery holder, 5V regulator, a 4-pin female header, a buzzer, two 100-ohm resistors, red LED and green LED, and the OSEPP Arduino board.

![hardware](https://github.com/Supermario565/Gas-Detection-System/assets/116227691/a49f61ff-a290-4633-a26c-a6d51c398cd3)

The OSEPP Arduino microcontroller operates on 5V, which is why the 9V battery holder has a 5V regulator: the OSEPP Arduino is then powered with the 5V to power the other components. The 4-pin female holder is a connector for the MQ2 sensor which is connected to GPIO pin GND, Vcc, and AO. The buzzer is connected to GPIO pin 13 and the red/green LED is connected to GPIO pins 4 and 3.
