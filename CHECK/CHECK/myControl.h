#pragma once

#include <conio.h>
#include <iostream>


enum direction {
    UP, DOWN, RIGHT, LEFT
};

void controlArrowKeys(direction* check, int* x, int* y);
