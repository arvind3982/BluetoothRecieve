
char x;

void setup()
{
  Serial1.begin(9600);
  Serial.begin(9600);
}
void loop()
{
  x=Serial1.read();
  Serial.write(x);
}

 
