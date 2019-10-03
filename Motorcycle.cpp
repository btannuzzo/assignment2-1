//
// Created by Betty Tannuzzo on 10/03/19
//


#include "Motorcycle.h"

Motorcycle::Motorcycle(string brand, string model, string fuelType){
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
}

Motorcycle::~Motorcycle() = default;



double Motorcycle::mileageEstimate(double time){
	double mileage = 10 * time;
	if(fuelType == "premium"){
		mileage += mileage * 0.10;
	}
	
	return mileage;
}


string Motorcycle::toString(){
	return "-> Motorcycle\n" + PoweredVehicle::toString();
}
