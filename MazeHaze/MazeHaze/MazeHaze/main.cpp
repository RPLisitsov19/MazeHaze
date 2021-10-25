#include <iostream>
#include <conio.h>
#include "menu.h"
#include "mazes.h"
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int main() {

	displayTitle();

	showMenuOptions();

	int choice;
	cin >> choice;

	chooseMenuOption(choice);

}