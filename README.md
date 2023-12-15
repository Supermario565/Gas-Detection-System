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

* Arduino IDE
  

# Setup and Configuration

 Install Arduino IDE, select the board, and connect the board to the computer via a USB port.


# Code Explanation

In our code's global variable declaration section, we configured the variables as constant integers to their respective GPIO pins; in the void setup() portion of the code, variables were configured as inputs and outputs. Next, in the void loop(), we declared the int variable gasDetected and set it equal to the digital output from the MQ2 sensor. We needed a condition for an if statement. Since the MQ2 outputs a LOW signal when it senses gas, we had the condition be when gasDetected is == LOW. When the condition is true the code functions to turn off the green LED, turn on the red LED, and activate the for loop containing the code to make the buzzer beep when gas is detected. The code within the for loop functions uses the tone(buzzer,1000) function to send a digital square wave with a frequency of 1 kHz to the buzzer, which produces a sound for .15 seconds due to the delay() function, and then the noTone function which turns off the buzzer for .15 seconds because of the delay() function. The for loop runs five times every time gas is detected. If gas is not detected, the red LED turns off, the green LED turns on, and the buzzer silences. The void loop() function repeats every .25 seconds.



# Usage

The system performs as expected, turning off the green LED, illuminating the red one, and beeping the buzzer when gas is detected. When gas is not detected, the red LED turns off, the green one illuminates and the buzzer is silent.


# Schematic

The schematic of our gas detection system entails a 9V battery holder, 5V regulator, a 4-pin female header, a buzzer, two 100-ohm resistors, red LED and green LED, and the OSEPP Arduino board.

![hardware](https://github.com/Supermario565/Gas-Detection-System/assets/116227691/a49f61ff-a290-4633-a26c-a6d51c398cd3)

The OSEPP Arduino microcontroller operates on 5V, which is why the 9V battery holder has a 5V regulator: the OSEPP Arduino is then powered with the 5V to power the other components. The 4-pin female holder is a connector for the MQ2 sensor which is connected to GPIO pin GND, Vcc, and AO. The buzzer is connected to GPIO pin 13 and the red/green LED is connected to GPIO pins 4 and 3.
