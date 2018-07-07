/*
 * Arduino library for Sparkfun 9DOF Sensor Stick
 * Header file
 *
 * Based on Razor AHRS Firmware  
 * https://github.com/ptrbrtz/razor-9dof-ahrs
 *
 * William Carroll
 * https://github.com/squayd
 * Begun 13 August 2016
 * 
 * The purpose of this library is to provide tools specific to the Sparkfun 
 * 9DOF SensorStick allowing access to its features in ways more familiar
 * to me.
 *
 */

#ifndef _9DOF_H_USED
#define _9DOF_H_USED

#include <Wire.h>

class SensorStick9DOF
{
  public:
    //functions
    SensorStick9DOF(int16_t accellerometerAddress, int16_t gyroscopeAddress,
                    int16_t magnetometerAddress);  //constructor
    bool begin();         //Initialize sensors and begin reading
    float getHeading();   //Returns magnetic heading
    //variables
  private:
    //functions
    //variables
    int16_t accAddress, gyroAddress, magAddress; //i2c addresses
}
#endif