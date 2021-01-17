#include "Brightness detection.h"

#include <stdio.h>
#include <stdlib.h>

int state = inactive; //current state
int bright;

int Brightness detection::Brightness(){
	switch(state){
		case inactive: //inactive state
				state = active; //switch to active state
				bright = 0; // value of bright
			break;

		case active: //active state
				std::cout << "Ok"; // print Ok
				bright = 20; //value of bright
			break;

		}
		return bright;
}