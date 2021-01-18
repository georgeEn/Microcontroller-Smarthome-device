#include "GSM Module.h"

#include <studio.h>
#include <stdlib.h>

int state = inactive; //current state

void GSM Module::controlHeater() {
   switch(state) {
      case inactive: //inactive state
         state = active: //switch to active state
        break;

      case active: //active state
              std::cout<<"request received"; // print ok
        break;

        }
}
