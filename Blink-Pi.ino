//Garima Roy

// the setup function runs once when you press reset or power the board
void setup() 
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void Dot()                     // There is a one-second delay when the dot function is used for both glowing and fading.
{
  digitalWrite(13, HIGH);      // LED Glows
  delay(1000);                 // wait for a one second  
  digitalWrite(13, LOW);       // LED Fades
  delay(1000);                 //wait for a one second     
}


void Dash()                     //There is a three-second delay when the dash function is used for both glowing and fading
{
  digitalWrite(13, HIGH);      // LED Glows
  delay(3000);                 // wait for a three second
  digitalWrite(13, LOW);       // LED Fades
  delay(3000);                 // wait for a three second
}

void loop()
{       //This is the morse code for my name "Garima"
  Dash();
  Dash();
  Dot();
  Dot();
  Dash();
  Dash();
  Dot();
  Dash();
  Dot();
  Dot();
  Dot();
  Dash();
  Dash();
  Dot();
  Dash();     
}  
