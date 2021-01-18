#include "Control system.h"
#include "Temperature detection.h"

#include <iostream>
#include <pthreads.h>

int GetroomTemperature(int *Cel) {
     Temperature detection::roomTemperature(int Cel);
}

void Control system::controlHeater() {
     /* we have a thread for the Temperature detection */
     /* Request room temperature */
     pthread_t threads;
     pthread_create(&threads, NULL, GetroomTemperature, int *Cel);

     switch(Cel) {
         case 1: //when room temperature is High
                 if (Temperature > 10) {
                 cout<<"High"endl; {
                 action = 0; // off heater
                 }
}
        break;
         case 0: //when room temperature is Low
                 if (Temperature < 10) {
                 cout<<"Low"endl;  {
                 action = 1; //on heater
                 }
}


        break;

     }

     pthread_exit(void *NULL);
}
