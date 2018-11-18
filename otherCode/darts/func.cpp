//
// Created by Ilya on 11/3/2018.
//
#include "func.h"
#include <iostream>
using namespace std;
float radius(float x, float y)
{
    return sqrt(x * x + y * y);
}
int score (float pull, float start)
{   float c;
    if (pull <= start)
    {
        if (pull <= 1)
        {
            c = 5;
            cout << "Your score: " <<c;
        }

        else
        {
            c = start / 5;
            cout << "Your score: " << (int)(6-pull/c);
        }
    }
    else
    {
        cout << "Outside of circle\n";
    }
    return 0;
}
