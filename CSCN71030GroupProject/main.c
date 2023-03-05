#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include "menus.h"
#include "Switches.h"
//code
int main(int argc, char* argv[]) {
	bool run = true;

	while (run) {
		printWelcome();
		PrintMainMenu();

		run = mainSelection();


	}



}