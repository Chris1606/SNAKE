#include <iostream>
#include <conio.h>
#include <windows.h>
#include "myLib.h"
#include "map.h"
#include "snakeDraw.h"
#include "control.h"

int main() {
    int xAxis[100], yAxis[100];
    drawWall();
    snakeInit(xAxis, yAxis);
    snake(xAxis, yAxis);
    int x = 50, y = 13;
    
    bool gameOver = false;
    while (!gameOver) {
        shiftingSnake(xAxis, yAxis);

        control(&check, &x, &y);

        snakeHandle(xAxis, yAxis, x, y);
        gameOver = gameOverCheck(x, y) || hitBody(xAxis, yAxis);
        Sleep(100);
    }
    _getch();
    return 0;
}
