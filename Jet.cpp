//
// Created by Betty Tannuzzo
//

#include "Jet.h"
#include <ctime>

Jet::Jet(string brand, string model, string fuelType, int numOfEngines){
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setNumberOfEngines(numOfEngines);
}


Jet::~Jet() = default;

int Jet::getNumberOfEngines(){
	return numberOfEngines;
}


void Jet::setNumberOfEngines(int numOfEngines){
	numberOfEngines = numOfEngines;
}

double Jet::mileageEstimate(double time){
	double mileage = (rand()%41 + 60) * time;
	if(numberOfEngines > 2 && fuelType == "Rocket"){
		mileage += mileage * 0.055;
	}	

	return mileage;
}
