//UID: 105502901 
//Name: Lisa Wang
//class: CS 31 Huang

#include <iostream>
#include "FrequentFlyerAccount.h"
#include "PlaneFlight.h"
using namespace std;

FrequentFlyerAccount::FrequentFlyerAccount(string name)
{
	mName = name;
}

double FrequentFlyerAccount::getBalance() {
	return mBalance;
}

string FrequentFlyerAccount::getName() {
	return mName;
}

//The mileage balance gets increased by adding flights to the account via calls to .addFlightToAccount( ... ) 
//when the passenger's name matches the frequent flyer account name. 
//.addFlightToAccount( ... ) should return true when the names match and return false otherwise. 

bool FrequentFlyerAccount::addFlightToAccount(PlaneFlight& flight) {
	//the conditional statement asks that if the &flight will have the same name, and if the flight's cost is greater than 0, then add the mileage to the balance
	if (mName == flight.getName()) {
		if (flight.getCost() > 0) {
			mBalance += flight.getMileage();
			return true;
		}
	}
		return false;
}


//A FrequentFlyerAccount can also be used to determine if enough of 
//a mileage balance is available for a desired flight via calls to .canEarnFreeFlight( )
//which returns the appropriate boolean answer

bool FrequentFlyerAccount::canEarnFreeFlight(double mileage) {
	//canEarnFreeFlight will only depend on if the balance of the person exceeds or is equal to the mileage provided 
	if (getBalance() >= mileage) {
		return true;
	}
		return false;
}

// Free flights can be redeemed from a FrequentFlyerAccount via calls to .freeFlight( ... ) 
//which should use the passed parameters to create the desired PlaneFlight with a zero cost, 
//adjusting the mileage balance accordingly.  
//.freeFlight( ... ) should return true when enough of a mileage balance existed to create a free flight and return false otherwise.

bool FrequentFlyerAccount::freeFlight(string FromCity, string ToCity, double Mileage, PlaneFlight& flight) {

	if (FromCity == ToCity) {
		return false;
	}

	if (canEarnFreeFlight(Mileage)) {
		//	     we must set the cost to 0 
		flight.setCost(0.0);
		flight = PlaneFlight(mName, FromCity, ToCity, 0, Mileage);
		//  creates an object

		mBalance = mBalance - Mileage;
		//	subtract the mileage from balance
		return true;
	
	}
	else {
		flight.setCost(flight.getCost());
		return false;
	}
}