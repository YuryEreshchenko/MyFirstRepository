//Yury Ereshchenko 114012010

int red = 5;
int green = 6;
int blue = 7;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}



// the loop function runs over and over again forever
void loop() {

  //Make sure its off
  TurnColorOFF(red);
  TurnColorOFF(green);
  TurnColorOFF(blue);

  TurnColorON(red);
  delay(5000);
  TurnColorOFF(red);
  delay(5000);

  TurnColorON(green);
  delay(5000);
  TurnColorOFF(green);
  delay(5000);

  TurnColorON(blue);
  delay(5000);
  TurnColorOFF(blue);
  delay(5000);

  //YELLOW
  TurnColorON(red);
  TurnColorON(green);
  delay(5000);
  TurnColorOFF(red);
  TurnColorOFF(green);
  delay(5000);

  //Magenta/pink
  TurnColorON(red);
  TurnColorON(blue);
  delay(5000);
  TurnColorOFF(red);
  TurnColorOFF(blue);
  delay(5000);

  //Turquoise
  TurnColorON(green);
  TurnColorON(blue);
  delay(5000);
  TurnColorOFF(green);
  TurnColorOFF(blue);
  delay(5000);

  //WHITE
  TurnColorON(red);
  TurnColorON(green);
  TurnColorON(blue);
  delay(5000);
  TurnColorON(red);
  TurnColorON(green);
  TurnColorON(blue);
  delay(5000);
}

void TurnColorON(int color) {
  digitalWrite(color, LOW);  // turn the LED on (HIGH is the voltage level)
}

void TurnColorOFF(int color) {
  digitalWrite(color, HIGH);  // turn the LED on (HIGH is the voltage level)
}
