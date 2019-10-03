//
// Created by Betty Tannuzzo
//

#include "Jet.h"


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

}
