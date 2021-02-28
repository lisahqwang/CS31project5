//name: Lisa Wang
//class: CS31 Huang
//UID: 105502901
#ifndef PLANEFLIGHT_H
#define PLANEFLIGHT_H

#include<string>
using namespace std;

class PlaneFlight {
public:
	//pasting all used function, constructors, and private variables here
	PlaneFlight(string Name, string FromCity, string ToCity, double Cost, double Mileage);
	double getCost();
	void setCost(double Cost);
	double getMileage();
	void setMileage(double Mileage);
	string getName();
	void setName(string Name);
	string getFromCity();
	void setFromCity(string FromCity);
	string getToCity();
	void setToCity(string ToCity);

private:
	double mCost;
	string mFromCity;
	string mToCity;
	string mName;
	double mMileage;
};

#endif

