#include "Mobile Phone.h"
#include <iostream>

void Mobile Phone::Open_window() {
	//send message to GSM Module to open the window
	std::cout<<"open"<<endl;
}

void Mobile Phone::Close_window() {
	//send message to GSM Module to close the window
	std::cout<<"close"<<endl;
}

void Mobile Phone::Get_WiFi_Status() {
	//Get the status of the wifi and send message to GSM Module if unavailable
	std::cout<<"Get status"<<endl;
}