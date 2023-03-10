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
	printf("\n4) Delete Vehicle");
	printf("\n5) Main Menu \n");
}

void printRentalMenu(void) {
	printf("To choose a function, enter its letter label:");
	printf("\n1) Make a Reservation");
	printf("\n2) View a Reservation");   //
	printf("\n3) Edit A reservation");   //to be done by customer name
	printf("\n4) Delete a Reservation"); //
	printf("\n5) Main Menu \n");
}

void printCustomerMenu(void) {
	printf("To choose a function, enter its letter label:");
	printf("\n1) Add Customer");
	printf("\n2) View Customer");  //
	printf("\n3) Edit Customer");  // done by name
	printf("\n4) Delete Customer");//
	printf("\n5) Main Menu \n");
}

void printRentalAgreementMenu(void) {
	printf("To choose a function, enter its letter label:");
	printf("\n1) View Rental Agreement");
	printf("\n2) Print Rental Agreement");
	printf("\n3) Main Menu \n");
}

void printBillingMenu(void) {
	printf("To choose a function, enter its letter label:");
	printf("\n1) Get Invoice");
	printf("\n2) Print Invoice");
	printf("\n3) Main Menu \n");
}	

void printSettingsMenu(void) {
	printf("To choose a function, enter its letter label:");
	printf("\n1) Date and Time");
	printf("\n2) Currency");
	printf("\n3) Main Menu \n");
}