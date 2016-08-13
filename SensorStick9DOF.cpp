/*
 * Arduino library for Sparkfun 9DOF Sensor Stick
 * Source file
 *
 * Based on Razor AHRS Firmware  
 * https://github.com/ptrbrtz/razor-9dof-ahrs
 *
 * William Carroll
 * https://github.com/squayd
 * Begun 13 August 2016
 *
 */

#include <SensorStick9DOF.h>

SensorStick9DOF::SensorStick9DOF(int16_t accellerometerAddress, int16_t gyroscopeAddress, int16_t magnetometerAddress)
{
  accAddress = accellerometerAddress;
  gyroAddress = gyroscopeAddress;
  magnetAddress = magnetometerAddress;
}
