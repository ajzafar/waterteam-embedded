#include <Arduino.h>
#include <Wire.h> // Communicate with I2C/TWI devices
#include "DS3231.h"

void scanIC2(TwoWire * wire);

void printInterruptStatus(HardwareSerial &serial);
void printDateTime(HardwareSerial &serial, DateTime now);


void writeEEPROM(TwoWire * wire, int deviceaddress, byte eeaddress, byte data );
byte readEEPROM(TwoWire * wire, int deviceaddress, byte eeaddress );
