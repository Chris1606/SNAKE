#include "gameOver.h"
#include "menu.h"
#include "snake.h"
void gameOver() {
	system("cls");
	
	gotoXY(45, 1);
	cout << "--------------------------" ;
	gotoXY(45, 2);
	cout << "-------- Game Over -------" ;
	gotoXY(45, 3);
	cout << "--------------------------";
	gotoXY(45, 4);
	cout << "Press any key to go back to menu.";
	while (1) {
		if (_kbhit()) { 
			char ch = _getch();  
			system("cls");
			menu();

		}
	}	
}