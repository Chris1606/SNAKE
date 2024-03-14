#include <iostream>
#include <conio.h>
#include "myLib.h"
#include "wall.h"
#include "snake.h"
#include "myControl.h"

#define MAX 100
using namespace std; 
int main() 
{
    bool gameOver = false;
    int xPositions[MAX], yPositions[MAX];
    draw_walls();
    initialize_snake(xPositions, yPositions);
    draw_snake(xPositions, yPositions);

    srand(time(NULL));
    int xFood = 0, yFood = 0;
    generate_food(xFood, yFood, xPositions, yPositions);

    int x = 50, y = 13;
    direction check = UP;
    while (!gameOver)
    {
        erase_previous_data(xPositions, yPositions);
    
        controlArrowKeys(&check, &x, &y);
        process_snake(xPositions, yPositions, x, y, xFood, yFood);
        gameOver = check_snake(xPositions, yPositions);
        Sleep(150);
    }

    _getch();
    return 0;
	


	return 0;
}