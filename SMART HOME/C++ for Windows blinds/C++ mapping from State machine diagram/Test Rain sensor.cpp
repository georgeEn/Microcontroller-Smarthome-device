#include "Rain sensor.h"

#include <stdio.h>
#include <stdlib.h>

int Rain sensor::Humidity(){
	switch(state!){
		case inactive:
			std::cout << "Failed to get the status of the Humidity"<<endl;
			if (Hum != 0)
			{
				std::cout << "Expected 0 for the value of Humidity"<<endl;
			}
		case active:
			std::cout << "Failed to get the status of the Humidity"<<endl;
			if (Hum != 100)
			{
				std::cout << "Expected 20 for the value of Humidity"<<endl;
			}
				}
}