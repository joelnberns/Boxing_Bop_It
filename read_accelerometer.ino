/*#include<Wire.h>
#include "globals.h"

accel_readings read_accelerometer() {
  Wire.beginTransmission(MPU);
  Wire.write(0x3B);  
  Wire.endTransmission(false);
  Wire.requestFrom(MPU,12,true);  
  AcX=Wire.read()<<8|Wire.read();    
  AcY=Wire.read()<<8|Wire.read();  
  AcZ=Wire.read()<<8|Wire.read();
    if (AcX > 0.1) {
    digitalWrite(LEDRedPin, HIGH);
  }
  accel_readings accel;
  accel.x = AcX;
  accel.y = AcY;
  accel.z = AcZ;
  return accel; 
}*/