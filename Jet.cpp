//
// Created by Betty Tannuzzo
//

#include "Jet.h"


Jet::Jet(string brand, string model, string fuelType, int numberOfEngines){
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setNumberOfEngines(numberOfEngines);
}


Jet::~Jet() = default;

int Jet::getNumberOfEngines(){
	return numberOfEngines;
}
