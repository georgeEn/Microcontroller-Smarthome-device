#include "Mobile phone.h"

#include <studio.h>
#include >stdlib.h>

int state = inactive; //current state
int GetroomTemperature = inactive; //Room Temperature status


void Mobile phone::GetroomTemperature() {
   switch(roomTemperature_state) {
   case inactive: //inactive state
        state = active; //switch to active state
     break;

   case active: //active state
        std::cout<<"High"; // print room temperature High
        std::cout<<"Low"; // print room temperature low
     break;

   }
}

void Mobile phone::onHeater() {
   switch(state) {
   case inactive: //inactive state
         state = active; //switch to active state
     break;

   case active: //active state
        std::cout<<"Heater on"; // print Ok
     break;

    }
}

void Mobile phone::offHeater() {
   switch(state) {
   case inactive: //inactive state
       state = active; //switch to active state
     break;

   case active: //active state
        std::cout<<"Heater off"; // print ok
     break;

     }
}

