/*
 * Arduino library for interacting with Honeywell HMC5883L magnetometer
 *
 * Written as part of SensorStick9DOF library for the Sparkfun
 * 9DOF sensor stick, should be applicable for any interaction with
 * this particular IC.
 *
 * William Carroll
 * https://github.com/squayd
 * Begun 29 August 2016
 * 
 * Following initialization and use examples from Razor_AHRS Firmware 
 * https://github.com/ptrbrtz/razor-9dof-ahrs
 *
 * header
 */
 #ifndef _HMC5883L_H_USED_
 #define _HMC5883L_H_USED_
 
 #define I2C_ADDRESS ((int16_t) 0x1E)
 
 #include <Wire.h>
 
 class HMC5883L
{
  public:
    //functions
    HMC5883L();           //constructor
    bool begin();         //Initialize sensors and begin reading
    float getHeading();   //Returns magnetic heading
    //variables
  private:
    //functions
    //variables
    int16_t i2cAddress;
}
 
 #endif