//Tic Tac Toe
//(c) Valentin, 2016

const int LEDPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10}; //D2 - D10
const int ButtonPins[] = {11, 12, 13}; //D11 - D13
                                       //D11 & D12 are for selection, D13 is for confirmation
int LEDVals[] = {0, 0, 0, 0, 0, 0, 0, 0, 0}; //Set the values of the LEDs
//0 = off, 1 = on (P1), 2 = sel (P1), 3 = on (P2), 4 = sel (P3), 5 = win (P1), 6 = win (P2)

bool Player; //false = P1, true = P2

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
void LEDMarkP1(int LPos) //Mark P1 in Possession of an LED.
{
  digitalWrite(LEDPins[LPos], HIGH); //'LPos' is used to reference which LED in the Array
  delay(500);                       //Wait 0.5 seconds
  digitalWrite(LEDPins[LPos], LOW);
  delay(500);
}

void LEDMarkP2(int LPos2) //Mark P2 in Possession of an LED.
{
  digitalWrite(LEDPins[LPos2], HIGH); //'LPos' is used to reference which LED in the Array
  delay(250);                         //Wait 0.25 seconds
  digitalWrite(LEDPins[LPos2], LOW);
  delay(250);
}

void LEDMarkSel(int LPos3) //Mark a LED being selected
{
  digitalWrite(LEDPins[LPos3], HIGH); //'LPos' is used to reference which LED in the Array
  delay(1000);                       //Wait 1 second
  digitalWrite(LEDPins[LPos3], LOW);
  delay(1000);
}

void WinAnimation(int Who) //"Animation" to play if either Player has won.
{
 if (Who == 1) //If P1 won, make an "O"
 {
  for (int i=0; i<9; i++)
  {
    if (LEDVals[i] == 5)
    {
      digitalWrite(LEDPins[i], HIGH);
    }
    else
    {
      digitalWrite(LEDPins[i], LOW);
    }
  }
 }
 if (Who == 2) //If P2 won, make a "X"
 {
  for (int i=0; i<9; i++)
  {
    if (LEDVals[i] == 6)
    {
      digitalWrite(LEDPins[i], HIGH);
    }
    else
    {
      digitalWrite(LEDPins[i], LOW);
    }
  }
 }
}


void GridCheck(int PCheck) //Check LED matrix if any Player got 3 in a row
{
  if (LEDVals[0] == PCheck) //D2, D3, D4
  { if (LEDVals[1] == PCheck) 
   { if (LEDVals[2]  == PCheck) 
    WinAnimation(PCheck);
   }
  }
  else if (LEDVals[0] == PCheck) //D2, D5, D8
  { if (LEDVals[3] == PCheck)
   { if (LEDVals[6] == PCheck)
    WinAnimation(PCheck);
   }
  }
  else if (LEDVals[0] == PCheck) //D2, D6, D10
  { if (LEDVals[4] == PCheck)
   { if (LEDVals[8] == PCheck)
    WinAnimation(PCheck);
   }
  }
  else if (LEDVals[1] == PCheck) //D3, D6, D9
  { if (LEDVals[4] == PCheck)
   { if (LEDVals[7] == PCheck)
    WinAnimation(PCheck);
   }
  }
  else if (LEDVals[2] == PCheck) //D4, D7, D10
  { if (LEDVals[5] == PCheck)
   { if (LEDVals[8] == PCheck)
    WinAnimation(PCheck);
   }
  }
  else if (LEDVals[3] == PCheck) //D5, D6, D7
  { if (LEDVals[4] == PCheck)
   { if (LEDVals[5] == PCheck)
    WinAnimation(PCheck);
   }
  }
  else if (LEDVals[6] == PCheck) //D8, D9, D10
  { if (LEDVals[7] == PCheck)
   { if (LEDVals[8] == PCheck)
    WinAnimation(PCheck);
   }
  }
  else if (LEDVals[2] == PCheck) //D4, D6, D8
  { if (LEDVals[4] == PCheck)
   { if (LEDVals[6] == PCheck)
    WinAnimation(PCheck);
   }
  }
  //0 = off, 1 = on (P1), 2 = sel (P1), 3 = on (P2), 4 = sel (P3)
}

void CheckButton(int Bnum) //Function to get state of specified button
{
  buttonState = digitalRead(ButtonPins[Bnum])
}

void loop()
{
  Player = false //Select P1
  
}
