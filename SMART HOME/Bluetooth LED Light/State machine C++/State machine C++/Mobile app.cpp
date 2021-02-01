#include "Mobile app.h"

#include <studio.h>
#include >stdlib.h>

int state = inactive; //current state
int connectBluetooth = inactive; //Bluetooth status


void Mobile app::connectBluetooth() {
   switch(Bluetooth_state) {
   case inactive: //inactive state
        state = active; //switch to active state
     break;

   case active: //active state
        std::cout<<"connected"; // print bluetooth connected
     break;

   }
}

void Mobile app::on light() {
   switch(state) {
   case inactive: //inactive state
         state = active; //switch to active state
     break;

   case active: //active state
        std::cout<<"Light on"; // print Ok
     break;

    }
}

void Mobile app::off light() {
   switch(state) {
   case inactive: //inactive state
       state = active; //switch to active state
     break;

   case active: //active state
        std::cout<<"Light off"; // print ok
     break;

     }
}

