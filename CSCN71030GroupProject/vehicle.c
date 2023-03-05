#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "vehicle.h"




VEHICLE createVehicle(char* year, char* make, char* model, int kilometers, double costPerDay) {
	VEHICLE newVehicle;
	newVehicle.carId = rand() % 1000 + 1;
	//check if vehicle has the same id then redo it

	strncpy(newVehicle.year, year, MAX_LENGTH_STRING);
	strncpy(newVehicle.make, make, MAX_LENGTH_STRING);
	strncpy(newVehicle.model, model, MAX_LENGTH_STRING);

	newVehicle.kilometers = kilometers;
	newVehicle.costPerDay = costPerDay;

	return newVehicle;

}
//this will be done without the id check, it is used for loading vehicles from file on startup
VEHICLE loadVehicle(int carId, char* year, char* make, char* model, int kilometers, double costPerDay) {

	VEHICLE newVehicle;
	newVehicle.carId = carId;

	strncpy(newVehicle.year, year, MAX_LENGTH_STRING);
	strncpy(newVehicle.make, make, MAX_LENGTH_STRING);
	strncpy(newVehicle.model, model, MAX_LENGTH_STRING);

	newVehicle.kilometers = kilometers;
	newVehicle.costPerDay = costPerDay;

	return newVehicle;
}

//dontreally need this
VEHICLE editVehicle(VEHICLE oldVehicle, VEHICLE newVehicle) {
	return newVehicle;
}

void printVehicle(VEHICLE vehicle) {
	printf("%s %s %s Kilometers: %d \n", vehicle.year, vehicle.make, vehicle.model, vehicle.kilometers);
}