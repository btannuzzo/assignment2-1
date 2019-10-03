//
// Created by Betty Tannuzzo
//

#include "Jet.h"
//#include <ctime>


//Constructor for Jet class
Jet::Jet(string brand, string model, string fuelType, int numOfEngines){	
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setNumberOfEngines(numOfEngines);
}

//Destructor for Jet class
Jet::~Jet() = default;


//gets number of engines and returns it
int Jet::getNumberOfEngines(){
	return numberOfEngines;
}

//sets number of engines
void Jet::setNumberOfEngines(int numOfEngines){
	numberOfEngines = numOfEngines;
}


//calculates mileage for Jet
double Jet::mileageEstimate(double time){
	double mileage = (rand()%41 + 60) * time;
	if(numberOfEngines > 2 && fuelType == "Rocket"){
		mileage += mileage * 0.055;
	}	

	return mileage;
}


//Prints out Jet's information
string Jet::toString(){

	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber Of Engines: " +
		to_string(numberOfEngines);
	
}
