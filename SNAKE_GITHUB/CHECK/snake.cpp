#include "snake.h"
int sl = 7;
void initialize_snake(int xPositions[], int yPositions[])
{
    int x = 50, y = 13;
    for (int i = 0; i < sl; i++)
    {
        xPositions[i] = x;
        yPositions[i] = y;
        x--;
    }
}

void draw_snake(int xPositions[], int yPositions[])
{
    for (int i = 0; i < sl; i++)
    {
        gotoXY(xPositions[i], yPositions[i]);
        if (i == 0)
        {
            cout << "0";
        }
        else
        {
            cout << "o";
        }
    }
}

void erase_previous_data(int xPositions[], int yPositions[])
{
    for (int i = 0; i < sl; i++)
    {
        gotoXY(xPositions[i], yPositions[i]);
        cout << " ";
    }
}

void process_snake(int xPositions[], int yPositions[], int x, int y, int& xFood, int& yFood)
{
    add(xPositions, x);
    add(yPositions, y);
    if (!check_snake_eat_food(xFood, yFood, xPositions[0], yPositions[0]))
    {
        remove(xPositions, sl - 1);
        remove(yPositions, sl - 1);
    }
    else
    {
        generate_food(xFood, yFood, xPositions, yPositions);
    }
    draw_snake(xPositions, yPositions);
}

void add(int a[], int x)
{
    for (int i = sl; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = x;
    sl++;
}

void remove(int a[], int pos)
{
    for (int i = pos; i < sl; i++)
    {
        a[i] = a[i + 1];
    }
    sl--;
}

bool check_snake_hit_wall(int x0, int y0)
{
    if (y0 == 1 && (x0 >= 10 && x0 <= 100))
    {
        return true;
    }
    else if (y0 == 26 && (x0 >= 10 && x0 <= 100))
    {
        return true;
    }
    else if (x0 == 100 && (y0 >= 1 && y0 <= 26))
    {
        return true;
    }
    else if (x0 == 10 && (y0 >= 1 && y0 <= 26))
    {
        return true;
    }
    return false;
}

bool check_snake_hit_tail(int xPositions[], int yPositions[])
{
    for (int i = 1; i < sl; i++)
    {
        if ((xPositions[0] == xPositions[i]) && (yPositions[0] == yPositions[i]))
        {
            return true;
        }
    }
    return false;
}

bool check_snake(int xPositions[], int yPositions[])
{
    bool check1 = check_snake_hit_tail(xPositions, yPositions);
    bool check2 = check_snake_hit_wall(xPositions[0], yPositions[0]);
    if (check1 || check2)
    {
        return true;
    }
    return false;
}

void generate_food(int& xFood, int& yFood, int xPositions[], int yPositions[])
{
    do
    {
        xFood = rand() % (99 - 11 + 1) + 11;
        yFood = rand() % (25 - 2 + 1) + 2;
    } while (check_food_position(xFood, yFood, xPositions, yPositions));

    int color = rand() % (15 - 1 + 1) + 1;
    SetColor(color);
    gotoXY(xFood, yFood);
    cout << "$";
    SetColor(7);
}

bool check_food_position(int xFood, int yFood, int xPositions[], int yPositions[])
{
    for (int i = 0; i < sl; i++)
    {
        if ((xFood == xPositions[i]) && (yFood == yPositions[i]))
        {
            return true;
        }
    }
    return false;
}

bool check_snake_eat_food(int xFood, int yFood, int x0, int y0)
{
    if ((x0 == xFood) && (y0 == yFood))
    {
        return true;
    }
    return false;
}
