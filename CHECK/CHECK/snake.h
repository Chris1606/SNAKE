#pragma once

#include "myLib.h"
#include <iostream>
#include <ctime>
using namespace std; 

void initialize_snake(int xPositions[], int yPositions[]);
void erase_previous_data(int xPositions[], int yPositions[]);
void draw_snake(int xPositions[], int yPositions[]);
void process_snake(int xPositions[], int yPositions[], int x, int y, int& xFood, int& yFood);
void add(int a[], int x);
void remove(int a[], int pos);
bool check_snake_hit_wall(int x0, int y0);
bool check_snake_hit_tail(int xPositions[], int yPositions[]);
bool check_snake(int xPositions[], int yPositions[]);
void generate_food(int& xFood, int& yFood, int xPositions[], int yPositions[]);
bool check_food_position(int xFood, int yFood, int xPositions[], int yPositions[]);
bool check_snake_eat_food(int xFood, int yFood, int x0, int y0);

void mainSnake();