#pragma once
#include <iostream>
#include <conio.h>
#include "myLib.h"

using namespace std;
void upperWall() {
	int x = 10;
	int y = 1;
	while (x <= 100)
	{
		gotoXY(x, y);
		cout << "+";
		x++;
	}
}
void lowerWall() {
	int x = 10;
	int y = 26;
	while (x <= 100)
	{
		gotoXY(x, y);
		cout << "+";
		x++;
	}
}
void leftWall() {
	int x = 10;
	int y = 1;
	while (y < 26)
	{
		gotoXY(x, y);
		cout << "+";
		y++;
	}
}
void rightWall() {
	int x = 100;
	int y = 1;
	while (y < 26)
	{
		gotoXY(x, y);
		cout << "+";
		y++;
	}
}
void drawWall() {
	SetColor(13);
	gotoXY(50, 0);
	cout << "SNAKE GAME";
	SetColor(12);
	upperWall();
	lowerWall();
	rightWall();
	leftWall();
	SetColor(9);

}
