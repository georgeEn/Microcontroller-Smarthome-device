#include "Mobile Phone.h"
#include <iostream>

void Mobile_Phone::On_Light() {
	//send message to GSM Module to open the Light
	std::cout<<"On"<<endl;
}

void Mobile_Phone::Off_Light() {
	//send message to GSM Module to close the Light
	std::cout<<"Off"<<endl;
}

void Mobile_Phone::Get_WiFi_Status() {
	//Get the status of the wifi and send message to GSM Module if unavailable
	std::cout<<"Get status"<<endl;
}

void Mobile_Phone::Test_Mobile_Phone(){
	
}