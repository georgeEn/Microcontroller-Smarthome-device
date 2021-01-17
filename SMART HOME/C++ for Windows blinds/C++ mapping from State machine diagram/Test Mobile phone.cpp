#include "Mobile phone.h"

#include <stdio.h>
#include <stdlib.h>

void Mobile Phone::Open_window(){
	if (state != 0 || state != 1)
	{
		std::cout << "Failed to open the window" <<endl;
		std::cout << "Expected 0 or 1 for the status" <<endl;
	}
}

void Mobile Phone::Close_window(){
	if (state != 0 || state != 1)
	{
		std::cout << "Failed to close the window" <<endl;
		std::cout << "Expected 0 or 1 for the status" <<endl;
	}
}

void Mobile Phone::Open_window(){
	if (WiFi_state != 0 || WiFi_state != 1)
	{
		std::cout << "Failed to get the status of the WiFi" <<endl;
		std::cout << "Expected 0 or 1 for the status" <<endl;
	}
}