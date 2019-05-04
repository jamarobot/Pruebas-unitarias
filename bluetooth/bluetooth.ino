//#include <SoftwareSerial.h>

//SoftwareSerial BTSerial(7, 8); // RX | TX

void setup()
{
 
  Serial1.begin(9600);
  
}

void loop()
{

  // Keep reading from HC-05 and send to Arduino Serial Monitor
	if (Serial1.available()){
		
		char datareceived=Serial1.read();
		Serial.println(datareceived);
		Serial1.println(datareceived);
	}
	

	if (Serial.available()){
		char data=Serial.read();
  		Serial.println(data);
    	Serial1.write(data);
  	}
}