int R_LED = 12;
int Y_LED = 11;
int G_LED = 10;

void setup() {
  pinMode(R_LED, OUTPUT);
  pinMode(Y_LED, OUTPUT);
  pinMode(G_LED, OUTPUT); //defines all the LED pins to output
  Serial.begin(9600);//Display in monitor
}
void loop() {
  int vol = analogRead(A0) * (5.0 / 1023.0*100);   //analog read the temperature sensor voltage

//delay(2000);
if (vol<=31)                                    //if the temperature is low
{

 Serial.print(" The temperature is: ");
Serial.print(vol);
 Serial.write(0xDF);
 Serial.println("    =its cool");
  Serial.println("");
 
  digitalWrite(G_LED, HIGH);                   // GREEN led on
  digitalWrite(Y_LED, LOW);
  digitalWrite(R_LED, LOW);
delay(1000);
}
else if (vol>=32 && vol<=40)                // if the temperature is middle            
 {
  
 Serial.print(" The temperature is: "); 
 Serial.print(vol);
 Serial.write(0xDF);
 Serial.println("    =its normal");
   Serial.println("");
   digitalWrite(R_LED, LOW);

  digitalWrite(Y_LED, HIGH);              //YELLOW led on
  digitalWrite(G_LED, LOW);
delay(1000);
}
else if (vol>=41)                            //If the temperature is HIGH
{
  
 Serial.print(" The temperature is: "); 
 Serial.print(vol);
  Serial.write(0xDF);
 Serial.println("    =its hot");
   Serial.println("");
   digitalWrite(G_LED, LOW);
  digitalWrite(Y_LED, LOW);
  digitalWrite(R_LED, HIGH);   
  delay(1000);// REDled on
}
delay(1000);
 }
