# ELM109_Week11.LAB
 This project demonstrates how to use a tilt switch to create a dynamic text animation on a 16x2 LCD screen. When the device is tilted, the text "falls" to the right, simulating a gravity-like effect. When the device is returned to its stable position, the text smoothly "falls" back to its original position.

ELM-109 Tech Programming 								             Week 11
LAB – TEXT ANIMATION WITH TILT CONTROL
“FALLING TEXT”
Interactive LCD Animation Using a Tilt Switch

Equipment:
•	1 x Breadboard
•	1 x Arduino UNO R3
•	1 x USB Type-B to USB cable (for programming and power)
•	Male to Male Jumper Wires
•	Male to Female Jumper Wires
•	1 x 16x2 LCD Display
•	1 x 10kΩ Potentiometer
•	1 x Tilt Switch

Objective:
In this lab, you will create an interactive LCD display that reacts to the orientation of the device. The text on the LCD will "fall" across the screen when the device is tilted and will smoothly return to its original position when the tilt is removed. This lab will help you understand how to use sensor input to control outputs on a display, enhancing your skills in conditional logic and animation effects.

Setup:
1.	Power and Ground Setup:
o	Connect the Arduino’s 5V pin to the + power rail on the breadboard using a jumper wire.
o	Connect the Arduino’s GND pin to the - ground rail on the breadboard using a jumper wire.
2.	LCD Display Connection:
o	Place the LCD display onto the breadboard, running parallel to the power rails.
o	Connect the LCD’s VSS pin to the - ground rail on the breadboard.
o	Connect the LCD’s VCC pin to the + power rail on the breadboard.
o	Connect the LCD’s RS pin to pin 12 on the Arduino.
o	Connect the LCD’s E (Enable) pin to pin 11 on the Arduino.
o	Connect the LCD’s D4 pin to pin 5 on the Arduino.
o	Connect the LCD’s D5 pin to pin 4 on the Arduino.
o	Connect the LCD’s D6 pin to pin 3 on the Arduino.
o	Connect the LCD’s D7 pin to pin 2 on the Arduino.
o	Connect the LCD’s RW pin to the - ground rail on the breadboard.
o	Connect the A (Anode) pin to the + power rail on the breadboard.
o	Connect the K (Cathode) pin to the - ground rail on the breadboard.
3.	Potentiometer Connection:
o	Place the potentiometer onto the breadboard.
o	Connect one end of the potentiometer to the + power rail on the breadboard.
o	Connect the other end of the potentiometer to the - ground rail on the breadboard.
o	Connect the wiper (middle pin) of the potentiometer to the VO pin of the LCD (for contrast control).
4.	Tilt Switch Connection:
o	Connect the GND pin of the tilt switch to the - ground rail on the breadboard.
o	Connect the VCC pin of the tilt switch to the + power rail on the breadboard.
o	Connect the Signal (OUT) pin of the tilt switch to pin 7 on the Arduino.

Procedure:
1.	Programming the Arduino:
o	Open the Arduino IDE on your computer.
o	Write or copy the provided code into the IDE.
o	Verify the code to check for errors.
o	Upload the code.
2.	Running the Experiment:
o	Once the code is uploaded, the LCD should display the message "Ready to slide!" in the center of the screen.
o	Tilt the switch gently towards an upright position to activate the tilt switch.
o	Observe the text as it "falls" to the right across the screen in response to the tilt.
o	When you return the device to its stable position, the text should smoothly "fall" back to its original position on the left.
3.	Observations:
o	Record how the text behaves under different tilt conditions.
o	Note the speed and smoothness of the text animation when the tilt switch is activated and deactivated.

5.	Conclusion:
o	Discuss how the tilt switch input was used to control the text animation on the LCD.
o	Consider how you might use other sensors to create different interactive effects on the LCD. For instance, could a joystick be used to control the position of text or graphics on the display?

Troubleshooting Tips:
•	If the LCD does not display any text, check your wiring connections and ensure that the correct pins are connected to the Arduino.
•	If the text does not move when the tilt switch is activated, verify that the tilt switch is correctly connected and that the sensorPin in the code matches the pin you used.
•	Adjust the potentiometer to ensure the text is clearly visible on the LCD.
•	Ensure the power and ground connections are secure on the breadboard and Arduino, and that your Arduino IDE “recognizes” the board.

Additional Challenges (Optional):
•	Modify the code to increase or decrease the speed of the text falling and returning. Can you think of a way to make the text "bounce" back when it reaches the edge of the screen?

