# Arduino-TicTacToe
Tic Tac Toe game based on an LED Matrix, some buttons and an Arduino Uno

##Key
All the pins in the code are referred to as either **DX** or **AX**, whereas the **D** marks a **digital** pin and the **A** an **analog** one.
The **X** after the D/A mark the number of the Pin.

Players are referred to as **PX**. The **X** is replaced by either a **1** or a **2**, indicating which player is being referenced.

##Components
The components utilized in this project are **9** green LEDs with **2,9V** - **3,5V** @ **20mA** with a corresponding **470Ω** resistor and **3** generic buttons.

A 5V USB Power-Source is used.

##Assignations
The LED Pins are assigned as shown in the table.
The value on the **left** defines the Pin on the arduino and the value on the **right** specifies the position in the LEDPins[] array.

| Row 1 | Row 2 | Row 3 |
|:-----:|:-----:|:-----:|
| D8 **[6]** | D9 **[7]** | D10 **[8]** |
| D5 **[3]** | D6 **[4]** | D7 **[5]** |
| D2 **[0]** | D3 **[1]** | D4 **[2]** |
