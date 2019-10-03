//
// Created by Betty Tannuzzo on 10/03/19
//


#include "Motorcycle.h"

//Constructor
Motorcycle::Motorcycle(string brand, string model, string fuelType){
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
}

//Destructor
Motorcycle::~Motorcycle() = default;


//Mileage function
double Motorcycle::mileageEstimate(double time){
	double mileage = 10 * time;		//mileage = 10 miles per minute	
	if(fuelType == "premium"){		//if fuel is premium
		mileage += mileage * 0.10;	//boost mileage by 10%
	}
	
	return mileage;
}


string Motorcycle::toString(){
	return "-> Motorcycle\n" + PoweredVehicle::toString();
}
