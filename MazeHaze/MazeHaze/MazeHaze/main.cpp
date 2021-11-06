#include <iostream>
#include <conio.h>
#include "menu.h"
#include "mazes.h"
using namespace std;



int main() {

	displayTitle();

	showMenuOptions();

	int choice;
	cin >> choice;

	chooseMenuOption(choice);

}