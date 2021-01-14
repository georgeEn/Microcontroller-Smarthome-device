#ifndef _BULB_H
#define _BULB_H

using namespace std; 
class Bulb
{
protected : 
	string BulbID; 
	bool BulbState; 

public: 
	Bulb();
	void bulb(string newBulb);
	void lightOn();
	void lightOff(); 

	void PrintState();
	void EditBulbName();
	bool checkBulb(string nameAtept);
	string printBulb();
	void loadBulb( string load_BulbID, bool load_BulbState);


};