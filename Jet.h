// 
// Created by Betty Tannuzzo on 10/02/19
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

//#include <ctime>
#include "PoweredVehicle.h"

class Jet: public PoweredVehicle {

private: 
	int numberOfEngines; 

public:	
	explicit Jet(string brand, string model, string fuelType, 
			int numOfEngines = 1);

	virtual ~Jet();
	int getNumberOfEngines();
	void setNumberOfEngines(int numOfEngines);
	virtual double mileageEstimate(double time);
	virtual string toString();	

};

#endif	//DRIVINGSIMULATOR_JET_H

