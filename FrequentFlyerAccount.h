//name: Lisa Wang
//UID: 105502901
//class: CS31 Huang


//.h file for FFA
#ifndef FREQUENTFLYERACCOUNT_H
#define FREQUENTFLYERACCOUNT_H
#include <iostream>
#include <string>
#include "PlaneFlight.h"
class FrequentFlyerAccount {
	//pasting all used function, constructors, and private variables here

public:
	FrequentFlyerAccount(string name);

	string getName();
	double getBalance();
	bool addFlightToAccount(PlaneFlight& flight);
	bool canEarnFreeFlight(double mileage);
	bool freeFlight(string FromCity, string ToCity, double Mileage, PlaneFlight& flight);

private:
	string mName;
	double mBalance;
};



#endif