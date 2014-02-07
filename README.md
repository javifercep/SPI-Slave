SPI-Slave
=========

Arduino SPI slave mode library

 - Change the Arduino/libraries/SPI folder by the folder in this repository.
 
Function changes:

 1. SPI.begin(mode) --> mode: SPI_MASTER or SPI_SLAVE
 2. SPI.attachInterrupt(function) --> function is the SPI ISR. When a interrupt occurs it will be called. This function   must take no parameters and return nothing.

Other functions act as the standard library.
