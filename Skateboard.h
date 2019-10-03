//
// Created by Betty Tannuzzo on 10/02/19
//

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_CPP

#include "Vehicle.h"

class Skateboard : public Vehicle {

public: 
	explicit Skateboard(string brand, string model);
	
	virtual ~Skateboard();
	virtual double mileageEstimate(double time);

	virtual string toString();	
};

#endif	//DRIVINGSIMULATOR_SKATEBOARD_H
