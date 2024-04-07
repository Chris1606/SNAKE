#include "wall.h"

void draw_upper_wall()
{
    int x = 10, y = 1;
    while (x <= 100)
    {
        gotoXY(x, y);
        cout << "+";
        x++;
    }
}

void draw_lower_wall()
{
    int x = 10, y = 26;
    while (x <= 100)
    {
        gotoXY(x, y);
        cout << "+";
        x++;
    }
}

void draw_right_wall()
{
    int x = 100, y = 1;
    while (y <= 26)
    {
        gotoXY(x, y);
        cout << "+";
        y++;
    }
}

void draw_left_wall()
{
    int x = 10, y = 1;
    while (y <= 26)
    {
        gotoXY(x, y);
        cout << "+";
        y++;
    }
}

void draw_walls()
{
    gotoXY(50, 0);
    cout << "SNAKE GAME";
    SetColor(11);
    draw_upper_wall();
    draw_lower_wall();
    draw_right_wall();
    draw_left_wall();
    SetColor(7);
}