#include "Temperature detection.h"

#include <studio.h>
#include <stdlib.h>

int state = inactive; //current state

int Temperature detection::roomTemperature(int Cel) {
    switch(state) {
       case inactive: //inactive state
                state = active; //switch to active state
                Cel = 0; // value of temperature
            break;

       case active: //active state
              std::cout<<"OK"; // print ok
              Cel = 1; //value of temperature
         break;
         }
         return Cel;
}
