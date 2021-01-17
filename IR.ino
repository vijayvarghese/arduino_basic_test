int IRSensor = 2; // connect ir sensor to arduino pin 2
int LED = 13; // conect Led to arduino pin 13



void setup() 
{
  pinMode (IRSensor, INPUT); //Setting sensor pin as INPUT
  pinMode (LED, OUTPUT); // Setting Led pin as OUTPUT
  Serial.begin(9600);
}

void loop()
{
  int statusSensor = digitalRead (IRSensor); // Reading voltage level at the digital pin where the IRsensor is connected 
  Serial.println("Digitalpin reading :"+ String(statusSensor));
  if (statusSensor == 1){
    digitalWrite(LED, LOW); // LED LOW
  }
  
  else
  {
    digitalWrite(LED, HIGH); // LED High
  }
  delay(300);
}
