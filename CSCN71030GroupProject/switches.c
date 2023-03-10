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
		case 5:
			printf("Main Menu");
			break;
		}
	}
}

bool rentalSelection(void) {
	bool thirdMenu = true;
	int option;
	char buf[NUM_SIZE_BYTES];

	printRentalMenu();

	while (thirdMenu) {
		if (!fgets(buf, NUM_SIZE_BYTES, stdin)) {
			return 1;
		}
		option = atoi(buf);

		if (option == 0)
			return false;
		switch (option) {
		case 1:
			printf("Make a Reservation");
			break;
		case 2:
			printf("View a Reservation");
			break;
		case 3:
			printf("Edit a Reservation");
			break;
		case 4:
			printf("Delete a Reservation");
			break;
		case 5:
			printf("Main Menu");
			break;

		}
	}
}

bool customerSelection(void) {
	bool thirdMenu = true;
	int option;
	char buf[NUM_SIZE_BYTES];

	printCustomerMenu();

	while (thirdMenu) {
		if (!fgets(buf, NUM_SIZE_BYTES, stdin)) {
			return 1;
		}
		option = atoi(buf);

		if (option == 0)
			return false;
		switch (option) {
		case 1:
			printf("Add Customer");
			break;
		case 2:
			printf("View Customer");
			break;
		case 3:
			printf("Edit Customer");
			break;
		case 4:
			printf("Delete Customer");
			break;
		case 5:
			printf("Main Menu");
			break;
		}
	}
}

bool rentalAgreementSelection(void) {
	bool thirdMenu = true;
	int option;
	char buf[NUM_SIZE_BYTES];

	printRentalAgreementMenu();

	while (thirdMenu) {
		if (!fgets(buf, NUM_SIZE_BYTES, stdin)) {
			return 1;
		}
		option = atoi(buf);

		if (option == 0)
			return false;
		switch (option) {
		case 1:
			printf("View Rental Agreement");
			break;
		case 2:
			printf("Print Rental Agreement");
			break;
		case 3:
			printf("Main Menu");
			break;

		}
	}
}

bool billingSelection(void) {
	bool thirdMenu = true;
	int option;
	char buf[NUM_SIZE_BYTES];

	printBillingMenu();

	while (thirdMenu) {
		if (!fgets(buf, NUM_SIZE_BYTES, stdin)) {
			return 1;
		}
		option = atoi(buf);

		if (option == 0)
			return false;
		switch (option) {
		case 1:
			printf("Get Invoice");
			break;
		case 2:
			printf("Print Invoice");
			break;
		case 3:
			printf("Main Menu");
			break;
		
		}
	}
}

bool settingsSelection(void) {
	bool thirdMenu = true;
	int option;
	char buf[NUM_SIZE_BYTES];

	printSettingsMenu();

	while (thirdMenu) {
		if (!fgets(buf, NUM_SIZE_BYTES, stdin)) {
			return 1;
		}
		option = atoi(buf);

		if (option == 0)
			return false;
		switch (option) {
		case 1:
			printf("Date and Time");
			break;
		case 2:
			printf("Currency");
			break;
		case 3:
			printf("Main Menu");
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

			secondMenu = rentalSelection();
			break;
		case 3:
			
			secondMenu = customerSelection();
			break;
		case 4:

			secondMenu = rentalAgreementSelection();
			break;
		case 5:

			secondMenu = billingSelection();
			break;
		case 6:
			secondMenu = settingsSelection();
			break;

		default:
			return false;
			break;
		}
	}
	

}