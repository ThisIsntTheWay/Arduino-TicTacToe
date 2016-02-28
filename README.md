# Arduino-TicTacToe
This project focuses on the game "Tic Tac Toe", built on an Arduino device.

##Key
All the pins in the code are referred to as either **DX** or **AX**, whereas the **D** marks a **digital** pin and the **A** an **analog** one.
The **X** after the D/A mark the number of the Pin.

Players are referred to as **PX**. The **X** is replaced by either a **1** or a **2**, indicating which player is being referenced.

##Components
The components utilized in this project are **9** green LEDs with **2,9V** - **3,5V** @ **20mA**, **9** **470Ω** resistors (for each LED) and **3** generic PCB push-buttons.

For the power-source, a 5V USB "Powerbank" is used.

##Assignations
The LED Pins are assigned as shown in the table.
The value on the **left** is for the Pin on the Arduino and the value on the **right** specifies the position in the _LEDPins[]_ array.

| Row 1 | Row 2 | Row 3 |
|:-----:|:-----:|:-----:|
| D8 **[6]** | D9 **[7]** | D10 **[8]** |
| D5 **[3]** | D6 **[4]** | D7 **[5]** |
| D2 **[0]** | D3 **[1]** | D4 **[2]** |
