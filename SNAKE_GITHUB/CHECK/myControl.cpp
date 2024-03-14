#include "myControl.h"
#include "myLib.h"
#include <iostream>
using namespace std;
void controlArrowKeys(direction* check, int* x, int* y) {
    if (_kbhit()) {
        int key = _getch();
        if (key == 27) {
            gotoXY(50, 28);
            cout << "This is the end";
            exit(0);
        }
        if (key == 224) {
            key = _getch();
            if (key == 72 && *check != DOWN) {
                *check = UP;
            }
            else if (key == 80 && *check != UP) {
                *check = DOWN;
            }
            else if (key == 77 && *check != LEFT) {
                *check = RIGHT;
            }
            else if (key == 75 && *check != RIGHT) {
                *check = LEFT;
            }
        }
    }
    if (*check == DOWN) {
        (*y)++;
    }
    else if (*check == UP) {
        (*y)--;
    }
    else if (*check == LEFT) {
        (*x)--;
    }
    else if (*check == RIGHT) {
        (*x)++;
    }
}
