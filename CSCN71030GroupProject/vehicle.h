#define MAX_LENGTH_STRING 10

typedef struct vehicle {
	int carId;
	char year[MAX_LENGTH_STRING];
	char make[MAX_LENGTH_STRING];
	char model[MAX_LENGTH_STRING];
	int kilometers;
	double costPerDay;
}VEHICLE, *pVEHICLE;

VEHICLE createVehicle(int carId, char* year, char* make, char* model, int kilometers, double costPerDay);

VEHICLE loadVehicle(int carId, char* year, char* make, char* model, int kilometers, double costPerDay);

VEHICLE editVehicle(VEHICLE oldVehicle, VEHICLE newVehicle);

void printVehicle(VEHICLE vehicle);
