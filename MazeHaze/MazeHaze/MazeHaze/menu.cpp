#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include "menu.h"
#include "mazes.h"

using namespace std;

void displayTitle() {
	cout << "______  ___                 ______  __                      " << endl;
	cout << "___   |/  /_____ ______________  / / /_____ ___________     " << endl;
	cout << "__  /|_/ /_  __ `/__  /_  _ \\_  /_/ /_  __ `/__  /_  _ \\  " << endl;
	cout << "_  /  / / / /_/ /__  /_/  __/  __  / / /_/ /__  /_/  __/    " << endl;
	cout << "/_/  /_/  \\__,_/ _____/\\___//_/ /_/  \\__,_/ _____/\\___/ " << endl;

	cout << endl;
}

void showMenuOptions() {
	cout << "1. Maze levels" << endl;
	cout << "2. How to play" << endl;
	cout << "3. Exit" << endl;
	cout << endl;
	cout << "Enter your choice: " << endl;
}

void mazes() {
	int lvl;

	cout << "1. Maze levels" << endl;
	cout << "   1) Easy (10 x 10)" << endl;
	cout << "   2) Medium (20 x 20)" << endl;
	cout << "   3) Hard (30 x 30)" << endl;

	cout << "Choose a level: " << endl;
	cin >> lvl;

	switch (lvl) {
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

