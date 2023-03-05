#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "menus.h"
void printWelcome(void) {
	printf("\n");
	printf(" **********************\n");
	printf("**      Welcome to    **\n");
	printf("**     Task Manager   **\n");
	printf(" **********************\n");
}

void PrintMainMenu(void) {
	printf("To choose a function, enter its letter label:");
	printf("\n1) Vehicle Inventory");
	printf("\n2) Rental Reservations");
	printf("\n3) Customer Management");
	printf("\n4) Rental Agreements");
	printf("\n5) Billing and Payments");
	printf("\n6) Settings");
	printf("\nEnter a character to exit. \n");
}

void printVehicleMenu(void) {
	printf("To choose a function, enter its letter label:");
	printf("\n1) View Current Inventory");
	printf("\n2) Add Vehicle");
	printf("\n3) Edit Vehicle");
	printf("\n4) Delete Vehicle \n");
}

void printRentalMenu(void) {
	printf("To choose a function, enter its letter label:");
	printf("\n1) Make a Reservation");
	printf("\n2) View a Reservation");   //
	printf("\n4) Edit A reservation");   //to be done by customer name
	printf("\n5) Delete a Reservation \n"); //
}

void printCustomerMenu(void) {
	printf("To choose a function, enter its letter label:");
	printf("\n1) Add Customer");
	printf("\n2) View Customer");  //
	printf("\n3) Edit Customer");  // done by name
	printf("\n4) Delete Customer \n");//
}

void printRentalAgreementMenu(void) {
	printf("To choose a function, enter its letter label:");
	printf("\n1) View Rental Agreement");
	printf("\n1) Print Rental Agreement \n");
}

void printBillingMenu(void) {
	printf("To choose a function, enter its letter label:");
	printf("\n1) Get Invoice");
	printf("\n1) Print Invoice \n");
}

void printSettingsMenu(void) {
	printf("To choose a function, enter its letter label:");
	printf("\n1) Date and Time");
	printf("\n1) Currency \n");
}