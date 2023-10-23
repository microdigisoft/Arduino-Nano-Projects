//Arduino DC motor

#define motor_pin 9 //Initialize pin9 to drive DC motor
#define led_pin 11  // Initialize pin11 to drive LED
void setup() { //setup function
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(" DC Motor simulation");

  pinMode(motor_pin, OUTPUT);
  pinMode(led_pin, OUTPUT);
}

void loop() { //loop function
  // put your main code here, to run repeatedly:
  Serial.println("Motor start       LED ON");
  digitalWrite(motor_pin, HIGH);
  digitalWrite(led_pin, HIGH); //turn ON motor

  delay(5000); //wait 5second

  Serial.println("Motor stop      LED OFF");
  digitalWrite(motor_pin, LOW);
  digitalWrite(led_pin, LOW);//turn OFF motor

  delay(5000); //wait 5second
