#include "menu.h"
#include "instruction.h"
void createMenu(){
        gotoXY(45, 1);
        cout << "===== Snake Game Menu =====" << std::endl;
        gotoXY(45, 2);
        cout << "1. Start Game" << std::endl;
        gotoXY(45, 3);
        cout << "2. Instructions" << std::endl;
        gotoXY(45, 4);
        cout << "3. Exit" << std::endl;
        gotoXY(45, 5);
        cout << "===========================" << std::endl;
}
void menuSelection() {
    int key; 
    while (true)
    {
       if (_kbhit()) {
           key = _getch() - '0'; // Convert ASCII to integer
           if (key == 1) {
               runGame();
           }
           else if (key == 2) {
               instruction();
           }
           else if (key == 3) {
               system("cls");
               gotoXY(50, 10);
               cout << "THANKS FOR PLAYING GAME";
               _getch();
               exit(0);
           }
       }
    }
}
void menu() {
    createMenu();
    menuSelection();
}