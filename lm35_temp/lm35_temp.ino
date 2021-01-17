int val; // creating a veriable to store the analog value
int tempPin = 1; // connect the data pin of the sensor to analog pin A1

void setup()
{
  Serial.begin(9600); // initializing the serial communication 
  pinMode(tempPin, INPUT); //setting data pin of the sensor as INPUT
}
void loop()
{
  val = analogRead(tempPin); // reading the analog value 
  float mv = ( val/1024.0)*5000; // convering the analog (10 bit ADC) value to mV
  float cel = mv/10; // converting mV value to Degree celsius
  float farh = (cel*9)/5 + 32; // converting Degree celsius to farenhite
  
  Serial.print(val); // printing the ADC value and the corresponding mV 
  Serial.print(" ADC value = ");
  Serial.print(mv);
  Serial.print(" mV");
  Serial.println();// to print an empty line
  
  Serial.print("TEMPRATURE = ");
  Serial.print(cel); // printing celsius value to the serial port
  Serial.print("*C");
  Serial.println();
  
  Serial.print("TEMPRATURE = ");
  Serial.print(farh); // printing farenhite value to the serial port
  Serial.print("*F");
  Serial.println();
  delay(1000);
}
