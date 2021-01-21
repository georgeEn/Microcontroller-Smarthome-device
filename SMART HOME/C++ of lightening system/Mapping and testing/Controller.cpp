#include "Controller.h"
#include "Bulb.h"
#include <iostream>

void Controller::Control_Light() {
	
switch (Bulbstate){
Case 0 :
	 Bulb::lighton(); /* Turn Off the light */
Case 1 :
	 Bulb::lightoff(); /* Turn On the light */

}
