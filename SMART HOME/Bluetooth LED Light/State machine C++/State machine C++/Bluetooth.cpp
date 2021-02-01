#include "Bluetooth.h"

#include <studio.h>
#include <stdlib.h>

int state = inactive; //current state

void Bluetooth::controlLight() {
   switch(state) {
      case inactive: //inactive state
         state = active: //switch to active state
        break;

      case active: //active state
              std::cout<<"command matching"; // print ok
        break;

        }
}
