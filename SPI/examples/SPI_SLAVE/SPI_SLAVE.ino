#include <SPI.h>

char data[6] = {
  'C','a','k','e','s','\n'};
int index = 0;

void setup()
{
  Serial.begin(9600);
  SPI.begin(SPI_SLAVE);
  SPI.attachInterrupt(hungry);
}

void loop()
{

}
void hungry()
{
  Serial.print(data[index]);
  byte c = SPI.transfer(data[index]);
  Serial.print((char)c);
  switch(c)
  {
  case 'H': 
    index = 1;
    break;
  case 'e': 
    index = 2;
    break;
  case 'l': 
    index = 3;
    break;
  case 'L': 
    index = 4;
    break;
  case 'o': 
    index = 5;
    break;
  case '\n': 
    index = 0;
    break;
  default:
    Serial.println("Nope");
    break;
  }
}




