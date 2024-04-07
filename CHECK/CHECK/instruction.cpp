#include "instruction.h"
#include "menu.h"
void instruction() {
	system("cls");
	gotoXY(48, 1);
	cout << "\tInstructions";
	gotoXY(45, 2);
	cout << "----------------------------------";
	gotoXY(45, 3);
	cout << "Using arrow keys to move the snake";
	gotoXY(45, 4);
	cout << "If you want to end game while playing, press ESC";
	gotoXY(45, 5);
	cout << "Press any key to go back to menu.";
	while (1) {
		if (_kbhit()) {
			char ch = _getch();
			system("cls");
			menu();

		}
	}
	_getch();
}