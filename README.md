# R3-SoftwareTask1-ErnestineHo  
Software Training Package #1  
Link to TinkerCAD: https://www.tinkercad.com/things/4yHN7dkdvfe    

In this project we are to display output on 7-segment displays. The task is to wire 2, 7-segment displays to an Arduino using 2 BCD to 7-segment decoders along with a potiometer to display a number between 0 and 99 based on the potiometers output/position.    

First the wires:  
1) The potentiometer wiper terminal is connected to the A0 pin of the Arduino
2) Pins 2 - 5 on the Arduino is connected to the left decoder
3) Pins 6 - 9 on the Arduino is connected to the right decoder
4) The left decoder is connected to the left 7-segment display
5) The rigth decoder is connected to the right 7-segment display
6) The decoders and potentiometers are given 5V from the Arduino
7) Everything is grounded

To take the value of the potentiometer, "potVal = analogRead(potPin)" is used to read the value from A0. When the Arduino reads the input, the value varies between 0 and 1023. To be able to display the value of the potentiometer, the boundaries of the range must be remapped to 0 - 99.  
"num = map(potVal, 0, 1023, 0, 99)" takes the potVal and remaps the upper bound from 1023 to 99.    

7-Segment decoders has 4 input lines and 7 output lines. The inputs of the decoders dictate which output ports should be set to HIGH (1) or LOW (0). The output ports are named a - g which corresponds to every a - g pin on the 7-segment display. To get a certain number to display on the 7-segment display, the remapped potentiometer value is used and some calcaulations is done.   
"tens = num / 10" is used to output a number for the tens position (left 7-segment display)  
"ones = num % 10" is used to output a number for the ones position (right 7-segment display)  
The functions "dispTens" and "dispOnes" are used to match the corresponding number and display the right binary number onto the 7-segment displays. The functions take an integer number and use an if statement to check the integer number and output the corresponding binary value onto the 7-segment display. The 7-segment displays can display numbers from 0 - 99 by tuning the potentiometer wiper. 
