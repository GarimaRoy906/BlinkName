/*
  Blink 
  Garima Roy
  2110994840
*/

// the setup function runs once when you press reset or power the board
void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void Dot() 
 {
    digitalWrite(LED_BUILTIN, LOW);     //  turn the LED off by making the voltage LOW
    delay(1000);                        // wait for a second
    digitalWrite(LED_BUILTIN, HIGH);    //  turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
}

void Dash()
{
    digitalWrite(LED_BUILTIN, LOW);      // turn the LED off by making the voltage LOW
    delay(1000);                        // wait for a second
    digitalWrite(LED_BUILTIN, HIGH);    // turn the LED on (HIGH is the voltage level)
    delay(3000);                       // wait for a three second
}

void loop() 
{
// the loop function runs over and over again forever

//G                                            //Displaying Letter G
  Dash();
  Dash();
  Dot();
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);                                 //We will leave it for 1 sec
  
//A                                             //Displaying Letter A
  Dot();
  Dash();
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);                                  //We will leave it for 1 sec
  
//R                                             //Displaying Letter R
  Dot();
  Dash();
  Dot();
  digitalWrite(LED_BUILTIN, LOW);               
  delay(1000);                                  //We will leave it for 1 sec
  
//I                                             //Displaying Letter I
  Dot();
  Dot();
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);                                  //We will leave it for 1 sec
  
//M                                             //Displaying Letter M
  Dash();
  Dash(); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);                                  //We will leave it for 1 sec
  
//A                                             //Displaying Letter A
  Dot();
  Dash(); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);                                  //We will leave it for 1 sec
}   
