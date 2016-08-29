/*
 * Test sketch for HMC5883L arduino library
 *
 * William Carroll
 * https://github.com/squayd
 * Begun 29 August 2016
 *
 */
 
 #include <Wire.h>
 #include <HMC5883L.h>
 
 #define BAUD_RATE 9600
 
 HMC5883L testMagnetometer;
 
 void setup()
 {
	Serial.begin(BAUD_RATE);	//Start the serial output
	Delay(50);					//Give the sensors time to initialize
	Wire.begin();				//Initialize Wire library
	
	//Initialzie magnetometer
	testMagnetometer = new HMC5883L;
 }
 
 void loop()
 {
	
 }