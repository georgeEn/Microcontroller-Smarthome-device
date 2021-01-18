#include "Mobile Phone.h"
#include <iostream>

void Mobile_Phone::On_Heater()
{
    //send message to GSM Module to on the Heater
    std::cout<<"on"<<endl;
}

void Mobile_Phone::Off_Heater()
 {
    //Send message to GSM Module to off the Heater
    std::cout<<"Off"<<endl;
    }

void Mobile_Phone::Get_room_temperature()
{
    //Get room temperature and send available status
    std::cout<<"Get status"<<endl;
}
