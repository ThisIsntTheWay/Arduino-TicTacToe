//Tic Tac Toe
//(c) Valentin, 2016

const int LEDPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10}; //D2 - D10
const int ButtonPins[] = {11, 12, 13}; //D11 - D13
                                       //D11 & D12 are for selection, D13 is for confirmation
const int LEDVals[] = {0, 0, 0, 0, 0, 0, 0, 0, 0); //Set the Values of the LEDs
                                                   //0 = off, 1 = on (P1), 2 = sel (P1), 3 = on (P2), 4 = sel (P3)

void setup()
{
 for (int i=0; i<9; i++) //Set all LEDs to OUTPUT
 {
  pinMode(LEDPins[i], OUTPUT);
 }
  for (int i=0; i<3; i++) //Set all Buttons to INPUT
 {
  pinMode(ButtonPins[i], INPUT);
 }
}

void loop()
{
  //Main Code
}
