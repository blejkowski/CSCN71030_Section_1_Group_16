#include <stdio.h>
#include <stdbool.h>
#include "menus.h"

#define NUM_SIZE_BYTES 4
//this is where we do the functionality
bool vehicleSelection(void) {
	bool thirdMenu = true;
	int option;
	char buf[NUM_SIZE_BYTES];

	printVehicleMenu();

	while(thirdMenu) {
		if (!fgets(buf, NUM_SIZE_BYTES, stdin)) {
			return 1;
		}
		option = atoi(buf);

		if (option == 0)
			return false;
		switch (option) {
		case 1:

			/*
			*Operationd will return a boolean
			* true if success, false if not success
			We will format it as 
			* 
			* 
			* if(ViewCurrentInventory() == true)
			*	print success
			*	return true;
			* else
			*	print not success
			*	return false;
			* 
			* 
			*/

			printf("View Current Inventory Function");
			break;
		case 2:
			printf("Add Vehicle Function");
			break;
		case 3:
			printf("Edit Vehicle Function");
			break;
		case 4:
			printf("Delete Vehicle Function");
			break;
		}
	}
}

bool mainSelection(void) {

	int option;
	char buf[NUM_SIZE_BYTES];
	bool secondMenu = true;
	while (secondMenu) {
		if (!fgets(buf, NUM_SIZE_BYTES, stdin)) {
			return 1;
		}
		option = atoi(buf);

		if (option == 0)
			return false;

		switch (option) {
		case 1:
			
			secondMenu = vehicleSelection();
			break;
		case 2:
			printRentalMenu();
			break;
		case 3:
			printCustomerMenu();
			break;
		case 4:
			printRentalAgreementMenu();
			break;
		case 5:
			printBillingMenu();
			break;
		case 6:
			printSettingsMenu();
			break;

		default:
			return false;
			break;
		}
	}
	

}