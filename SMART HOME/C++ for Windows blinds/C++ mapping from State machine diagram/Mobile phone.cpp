#include "Mobile phone.h"

#include <stdio.h>
#include <stdlib.h>

int state = inactive; //current state
int WiFi_state = inactive; //WiFi status

void Mobile Phone::Open_window(){
	switch(state){
		case inactive: //inactive state
				state = active; //switch to active state
			break;

		case active: //active state
				std::cout << "Ok"; // print Ok
			break;

		}
}

void Mobile Phone::Close_window(){
	switch(state){
		case inactive: //inactive state
				state = active; //switch to active state
			break;

		case active: //active state
				std::cout << "Ok"; // print Ok
			break;

		}
}

void Mobile Phone::Get_WiFi_Status(){
	switch(WiFi_state){
		case inactive: //inactive WiFi state
				std::cout << "WiFi Off";	; // print WiFi off and work using GSM mode
			break;

		case active: //active WiFi state
				std::cout << "WiFi On"; // print WiFi on and work using WiFi mode
			break;

		}
}