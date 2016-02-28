//Tic Tac Toe
//(c) Valentin, 2016

const int LEDPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10}; //D2 - D10
const int ButtonPins[] = {11, 12, 13}; //D11 - D13
                                       //D11 & D12 are for selection, D13 is for confirmation
int LEDVals[] = {0, 0, 0, 0, 0, 0, 0, 0, 0); //Set the Values of the LEDs
                                                   //0 = off, 1 = on (P1), 2 = sel (P1), 3 = on (P2), 4 = sel (P3)
bool Player = false //false = P1, true = P2

void setup()
{
 for (int i=0; i<9; i++) //Set all LEDs as OUTPUT
 {
  pinMode(LEDPins[i], OUTPUT);
 }
  for (int i=0; i<3; i++) //Set all Buttons as INPUT
 {
  pinMode(ButtonPins[i], INPUT);
 }
}

//The following 2 Functions will be used to "mark" a Player in possession of an LED. Since only unicolour LEDs are being used, the LEDs will just blink in a set interval.
void LEDMarkP1(int LPos) //Mark P1 in Possession of an LED.+
{
  digitalWrite(LEDPins[LPos], HIGH); //'LPos' is used to reference which LED in the Array
  delay(1000);                       //Wait 1 second
  digitalWrite(LEDPins[LPos], LOW);
  delay(1000);
}

void LEDMarkP2(int LPos2) //Mark P2 in Possession of an LED.
{
  digitalWrite(LEDPins[LPos2], HIGH); //'LPos' is used to reference which LED in the Array
  delay(250);                         //Wait 0.25 seconds
  digitalWrite(LEDPins[LPos2], LOW);
  delay(250);
}

void CheckButton(int Bnum) //Function to get buttonstate
{
  buttonState = digitalRead(buttonPin)
}

void loop()
{
  buttonState = digitalRead(ButtonPins[x])
}
