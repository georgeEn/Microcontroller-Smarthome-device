#include "Rain sensor.h"

#include <stdio.h>
#include <stdlib.h>

int state = inactive; //current state
int Hum;

int Rain sensor::Humidity(){
	switch(state){
		case inactive: //inactive state
				state = active; //switch to active state
				Hum = 0; // value of humidity
			break;

		case active: //active state
				std::cout << "Ok"; // print Ok
				Hum = 100; //value of humidity
			break;

		}
		return Hum;
}