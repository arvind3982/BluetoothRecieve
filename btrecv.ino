
char x;

void setup()
{
  Serial1.begin(9600);
  Serial.begin(9600);
}
void loop()
{
  if(Serial1.available())
  {
    x=Serial1.read();
    Serial.print(x);
    delay(1000);
  }
}

 
