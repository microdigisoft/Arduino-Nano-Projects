const int redPin = 7;
const int greenPin = 6;
const int bluePin = 5;
               
  void setup() 
  {
    pinMode(redPin,OUTPUT);
    pinMode(greenPin,OUTPUT);
    pinMode(bluePin,OUTPUT);
  }
  
 void primaryColors(int redValue, int greenValue, int blueValue)
  {
    digitalWrite(redPin, redValue);
    digitalWrite(greenPin, greenValue);
    digitalWrite(bluePin, blueValue);
  }
  
  void loop()
  {
    delay(1000);
    primaryColors(1,0,0); // Red
    delay(1000);
    primaryColors(0,1,0); // Green
    delay(1000);
    primaryColors(0,0,1); // Blue
    delay(1000);
    primaryColors(1,1,0); // Yellow
    delay(1000);
    primaryColors(1,0,1); // Magenta
    delay(1000);
    primaryColors(0,1,1); // Cyan
    delay(1000);
    primaryColors(1,1,1); // White
    delay(1000);
  }
