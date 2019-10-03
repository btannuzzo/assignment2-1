//
// Created by Betty Tannuzzo on 10/02/19
//

#include "Skateboard.h"

Skateboard::Skateboard(string brand, string model){
	setBrand(brand);
	setModel(model);
}


Skateboard::~Skateboard() = default;


double Skateboard::mileageEstimate(double time){
	double mileage = rand() % 41 + 10;
	mileage /= 100;
	mileage *= time; 
	
	double thirdOfTime = time/3;
	thirdOfTime++;
	double randTime;	

	if(time > 50 && time < 250){
		randTime = rand() % thirdOfTime + 1;
		mileage = randTime;	
	}
	
 	return mileage;
}


