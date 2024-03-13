#pragma once
#include <iostream>
#include <conio.h>
#include "myLib.h"
using namespace std;
int initBody = 4;

void snakeInit(int* xAxis, int* yAxis) {
	int x = 50, y = 13;
	for (int i = 0; i < initBody; i++) {
		xAxis[i] = x;
		yAxis[i] = y;
		x--;
	}
}
void snake(int* xAxis, int* yAxis) {
	for (int i = 0; i < initBody; i++) {
		gotoXY(xAxis[i], yAxis[i]);
		if (i == 0) {
			cout << "0";
		}
		else {
			cout << "o";
		}
	}
}
void shiftingSnake(int* xAxis, int* yAxis) {
	for (int i = 0; i < initBody; i++) {
		gotoXY(xAxis[i], yAxis[i]);
		cout << " ";
	}
}

void add(int* axis, int value) {
	for (int i = initBody; i >= 0; i--) {
		axis[i] = axis[i - 1];
	}
	axis[0] = value;
	initBody++;
}
void shifting(int* axis, int pos) {
	for (int i = pos; i < initBody; i++) {
		axis[i] = axis[i + 1];
	}
	initBody--;
}

void snakeHandle(int* xAxis, int* yAxis, int x, int y) {
	add(xAxis, x);
	add(yAxis, y);

	shifting(xAxis, initBody - 1);
	shifting(yAxis, initBody - 1);

	snake(xAxis, yAxis);
}

bool gameOverCheck(int x, int y) {
	if (y == 1 && (x >= 10 && x <= 100)) {
		return true;
	}
	else if (y == 26 && (x >= 10 && x <= 100)) {
		return true;
	}
	else if (x == 100 && (y >= 1 && y <= 26)) {
		return true;
	}
	else if (x == 10 && (y >= 1 && y <= 26)) {
		return true;
	}
	return false;
}
bool hitBody(int* xAxis, int* yAxis) {

	for (int i = 1; i < initBody; i++) {
		if ((xAxis[0] == xAxis[i]) && (yAxis[0] == yAxis[i])) {
			return true;
		}
	}
	return false;
}