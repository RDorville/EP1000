/*
  Shows Rotary Encoder and Potentiometer
  Does not use libraries, shows the bouncing
  effect of the rotary encoder.
  Monitor the Serial output vs the LCD display
*/

#include <LiquidCrystal_PCF8574.h>
#include <Wire.h>

const int POT = A0;

// Rotary Encoder
const int SW = 2;
const int DT = 5;
const int CLK = 4;
int currentStateClk;
int previousStateClk;
String encdir = "";
const int MINVALUE = 0;
const int MAXVALUE = 100;
int counter = 0;

const int LCDADDR = 0x27;
LiquidCrystal_PCF8574 lcd(LCDADDR);

int lastValue = 0;
char buf[10];

void init_lcd() {
  lcd.begin(16, 2);
  lcd.clear();
  lcd.home();
  lcd.setBacklight(128);
  lcd.setCursor(0, 0);
  lcd.noBlink();
  lcd.noCursor();
}


void setup() {
  // for debugging
  Serial.begin(9600);
  Serial.println("Ready");
  // intialise Rot Encoder
  pinMode(DT, INPUT_PULLUP);
  pinMode(CLK, INPUT_PULLUP);
  // read inital state of the Rotary Encoder
  previousStateClk = digitalRead(CLK);
  
  // initialise lcd
  init_lcd();
  lcd.setCursor(0, 0);
  lcd.print("Pot : ");
  lcd.setCursor(0, 1);
  lcd.print("Rot : ");
  lcd.setCursor(6,1);
  lcd.print(counter);
  lcd.setCursor(10,1);
  lcd.print("    ");
  //
  lastValue = 0;
}

void loop() {
    currentStateClk = digitalRead(CLK);

    // if previous and current state are different
    if (currentStateClk != previousStateClk){
        
        if (digitalRead(DT) != currentStateClk){
            counter--;
            encdir = "CCW";
        }
        else {
            // encoder going clockwise
            counter++;
            encdir = "CW ";
        }
        lcd.setCursor(6,1);
        lcd.print("   ");
        lcd.setCursor(6,1);
        lcd.print(counter);
        lcd.setCursor(10,1);
        lcd.print(encdir);
        Serial.println(counter);
    }
    previousStateClk = currentStateClk;

/*    
  // read the potentiometer
  int value = analogRead(POT);
  if (lastValue != value) {
    // there is a change
    lcd.print("    ");
    String s = String(value);
    Serial.println(s);
    lcd.setCursor(6, 0);
    lcd.print(s);
    // save the value
    lastValue = value;
  }
*/

}
