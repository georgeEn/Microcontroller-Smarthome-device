#include "Bulb.h"
#include<iostream>


Bulb::Bulb()
{
	BulbState = false; 
	BulbID = "unkown";
}



void Bulb::bulb(string newBulb)
{
	BulbID = newBulb;

}

void Bulb::lightOn()
{
	BulbState = 1; 
	cout << "bulb is on " << endl;
	char toContinue = _getch();
}

void Bulb::lightOff()
{
	BulbState = 0; 
	cout << "bulb is off " << endl;
	char toContinue = _getch();
}

void Bulb::PrintState()
{
	cout << "current state is " << BulbState << endl; 
	char toContinue = _getch();
}

void Bulb::EditBulbName()
{

	cout << "enter new name" << endl; 
	cin >> BulbID; 


}


bool Bulb::checkBulb(string nameAtempt)
{
	if (nameAtempt == BulbID)
		return true;
	else
		return false;
}

string Bulb::printBulb()
{
	return BulbID;
}

void Bulb::loadBulb(string load_BulbID, bool load_BulbState)
{
	BulbID = load_BulbID;
	BulbState = load_BulbState;
}