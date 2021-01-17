#include "Microcontroller.h"
#include <iostream>
#include <pthreads.h>

void *Request_humidity(void *NULL){
	std::cout<<"request humidity"<<endl;
	std::cout<<"open"<<endl;
	std::cout<<"close"<<endl;
}


void Microcontroller::Control_window() {
	//send ok to GSM module that the command is received
	std::cout<<"ok"<<endl;
	
	/* we have 2 threads now for the rain detection and the brightness detection as they are operating in parrallel */
	
	/* 1st thread : request humidity from rain sensor, receive it and then open or close window */
	pthread_t threads;
	pthread_create(&threads, NULL, Request_humidity,void *NULL);
	
	/* 2nd thread : request brightness to brightness detection, receive it and then open or close window */
	std::cout<<"request brightness"<<endl;
	std::cout<<"open"<<endl;
	std::cout<<"close"<<endl;

	pthread_exit(void *NULL);
}