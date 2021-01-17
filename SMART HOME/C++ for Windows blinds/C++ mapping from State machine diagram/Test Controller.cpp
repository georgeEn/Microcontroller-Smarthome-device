#include "Controller.h"
#include "Rain sensor.h"
#include "Brightness detection.h"

#include <iostream>

void Microcontroller::Control_window() {
	switch(Hum){
		case 100: //when it rains
					if (bright != 20 || bright!= 0) // if it rains and the value from the brightness detection is incorrect
					{
						std::cout << "Failed to close the Window"<<endl;
						std::cout << "Expected value of 0 or 20 from the Brightness sensor"<<endl;
					}
			break;

		case 0: //when it doesn't rain
				if (bright != 20 || bright!= 0) // if it doesn't rain and the value from the brightness detection is incorrect 
				{
					std::cout << "Error! Expected value of 0 or 20 from the Brightness sensor"<<endl;
				}
			break;

		}
}