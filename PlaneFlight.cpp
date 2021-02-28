//name: Lisa Wang
//UID: 105502901
//class: CS31 Huang


#include <iostream>
#include <string>
#include <ctype.h>
#include "PlaneFlight.h"
#include "FrequentFlyerAccount.h"
using namespace std;

PlaneFlight::PlaneFlight(string Name, string FromCity, string ToCity, double Cost, double Mileage)
{
	mName = Name;
	mFromCity = FromCity;
	mToCity = ToCity;
	mCost = Cost;
	mMileage = Mileage;

}

//PlaneFlight::PlaneFlight( string FromCity, string ToCity, double Mileage)
//{
//	mFromCity = FromCity;
//	mToCity = ToCity;
//	mMileage = Mileage;

//}
double PlaneFlight::getCost() {
	return mCost;
}

void PlaneFlight::setCost(double Cost) {
	if (Cost >= 0) {

		mCost = Cost;
	}
	else {
		mCost = -1;
	}
}

double PlaneFlight::getMileage() {
	return mMileage;
}
void PlaneFlight::setMileage(double Mileage) {
	if (Mileage >= 0) {
		mMileage = Mileage;
	}
	else {
		mMileage = -1;
	}
}

string PlaneFlight::getName() {
	return mName;
}

void PlaneFlight::setName(string Name) {
	if (Name != "") {
		mName = Name;
	}
}

string PlaneFlight::getFromCity() {
	return mFromCity;
}

//I used the getToCity function to see if the cities have matching values, if then, do not set them equal, just return 
void PlaneFlight::setFromCity(string FromCity) {
	if (FromCity == "" || FromCity == getToCity()) {
		return;
	}
	mFromCity = FromCity;
}

string PlaneFlight::getToCity() {
	return mToCity;
}

// I used the getToCity function to see if the cities have matching values, if then, do not set them equal, just return 
void PlaneFlight::setToCity(string ToCity) {
	if (getFromCity() == ToCity || ToCity == "") {
		return;
	}
	mToCity = ToCity;
}
