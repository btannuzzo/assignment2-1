//
// Created by Betty Tannuzzo on 10/03/19
//

#ifndef DRIVINGSIMULATOR_MOTORCYCLE_H
#define DRIVINGSIMULATOR_MOTORCYCLE_H

#include "PoweredVehicle.h"

class Motorcycle : public PoweredVehicle {

public:
	explicit Motorcycle(string brand, string model, string fuelType);
	
	virtual ~Motorcycle();
	virtual double mileageEstimate(double time);
	virtual string toString(); 

};

#endif	//DRIVINGSIMULATOR_MOTORCYCLE_H
