#include "Controller.h"
#include "Rain sensor.h"
#include "Brightness detection.h"

#include <iostream>
#include <pthreads.h>

int *Request_humidity(NULL){
	Rain sensor::Humidity();
}


void Microcontroller::Control_window() {
	
	/* we have 2 threads now for the rain detection and the brightness detection as they are operating in parrallel */
	
	/* 1st thread : request humidity from rain sensor */
	pthread_t threads;
	pthread_create(&threads, NULL, Request_humidity, NULL);
	
	/* 2nd thread : request brightness from brightness detection*/
	Brightness detection::Brightness();
	
	switch(Hum){
		case 100: //when it rains
					if (bright = 20) // during the day
					{
						action = 0; //close the window
					}
					if (bright = 0) // during the night
					{
						action = 0; //close the window
					}
			break;

		case 0: //when it doesn't rain
				if (bright = 20) //during the day 
				{
					action = 1; // open the window
				}
				if (bright = 0) // during the night
				{
					action = 0; // close the window
				}
			break;

		}

	pthread_exit(void *NULL);
}