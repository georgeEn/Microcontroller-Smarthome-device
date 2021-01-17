#include "GSM Module.h"

#include <stdio.h>
#include <stdlib.h>

void GSM Module::Command_window_Mic(){
	if (state != 0 || state != 1 )
	{
		std::cout << "Failed to send command to Microcontroller"<<endl;
		std::cout << "Expected 0 or 1 as state"<<endl;
	}
}