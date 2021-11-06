#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include "menu.h"
#include "mazes.h"
#include "constants.h"
using namespace std;

void displayTitle() {
	cout << "______  ___                 ______  __                      " << endl;
	cout << "___   |/  /_____ ______________  / / /_____ ___________     " << endl;
	cout << "__  /|_/ /_  __ `/__  /_  _ \\_  /_/ /_  __ `/__  /_  _ \\  " << endl;
	cout << "_  /  / / / /_/ /__  /_/  __/  __  / / /_/ /__  /_/  __/    " << endl;
	cout << "/_/  /_/  \\__,_/ _____/\\___//_/ /_/  \\__,_/ _____/\\___/ " << endl;

	cout << endl;
}

void printChecked(string label, bool checked) {
	cout << (checked ? "-> " : "") << label << endl;
}

void showMenuOptions() {
	int state = 1;
	int action = 0;
	while (action != 13) {
		if (action == KEY_UP && state > 1) {
			state--;
		}
		if (action == KEY_DOWN && state < 3) {
			state++;
		}
		printChecked("Maze levels", state == 1);

		printChecked("How to play", state == 2);

		printChecked("Exit", state == 3);

		action = _getch();
		system("cls");

		displayTitle();
	}
	chooseMenuOption(state);
}

void mazes() {
	int state = 1;
	int action = 0;
	while (action != 13) {
		if (action == KEY_UP && state > 1) {
			state--;
		}
		if (action == KEY_DOWN && state < 3) {
			state++;
		}
		printChecked("Easy (10 x 10)", state == 1);

		printChecked("Medium (20 x 20)", state == 2);

		printChecked("Hard (30 x 30)", state == 3);

		action = _getch();
		system("cls");

		displayTitle();
	}
	switch (state) {
	case 1: { system("cls"); mazeEasy(); break; }
	case 2: { system("cls"); mazeMedium(); break; }
	case 3: { system("cls"); mazeHard(); break; }
	default: { cout << "Incorrect input!"; break; }
	}
}

void chooseMenuOption(int choice) {
	switch (choice) {
	case 1: {
		system("cls");
		displayTitle();

		mazes();

		cout << endl;
		cout << "2. How to play" << endl;
		cout << "3. Exit" << endl;
		break;
	}

	case 2: {
		system("cls");
		displayTitle();

		cout << "1. Maze levels" << endl;
		cout << "2. How to play" << endl;
		cout << " * Use the arrow keys to explore the maze." << endl;
		cout << " * Get to the 'X' to clear the level." << endl;
		cout << endl;
		cout << "3. Exit" << endl;
		break;
	}

	case 3: {
		system("cls");
		displayTitle();

		cout << "1. Maze levels" << endl;
		cout << "2. How to play" << endl;
		cout << "3. Exit" << endl;
		cout << "Exiting program..." << endl;
		break;
	}

	default: {
		cout << "Incorrect input!" << endl;
		break;
	}

	}
}

