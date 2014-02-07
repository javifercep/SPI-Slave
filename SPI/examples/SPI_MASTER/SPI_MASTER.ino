#include <SPI.h>

char data[6] = {
  'H','e','l','L','o','\n'};
int index;

void setup()
{
  Serial.begin(9600);
  SPI.begin(SPI_MASTER);
}

void loop()
{
  digitalWrite(SS, LOW);
  byte c = SPI.transfer(data[index]);
  digitalWrite(SS,HIGH);
  Serial.print((char)c);
  switch(c)
  {
  case 'C': 
    index = 1;
    break;
  case 'a': 
    index = 2;
    break;
  case 'k': 
    index = 3;
    break;
  case 'e': 
    index = 4;
    break;
  case's': 
    index = 5;
    break;
  case '\n': 
    index = 0;
    break;
  default:
    Serial.println("Nope");
    break;
  }
  delay(200);
}



