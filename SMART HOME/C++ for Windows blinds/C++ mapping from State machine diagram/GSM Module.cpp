#include "GSM Module.h"

#include <stdio.h>
#include <stdlib.h>

int state = inactive; //current state

void GSM Module::Command_window_Mic(){
	switch(state){
		case inactive: //inactive state
				state = active; //switch to active state
			break;

		case active: //active state
				std::cout << "Command received"; // print Ok
			break;

		}
}