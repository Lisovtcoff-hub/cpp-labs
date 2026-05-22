#include <iostream>
#include <cmath>
#include "console_utils.h"
using namespace std;

float f1(float x)
{
    return sin(x) / x;
}

float f2(float y)
{
    return y * y + 2 * y * sqrt(y);
}

float f3(float z)
{
    return (z + 2) * (z + 1) * z;
}

void print(float x, float (*y)(float)) // float *y(float) = y — функция, которая принимает float и возвращает указатель на float   А У НАС САМА у - УКАЗАТЕЛЬ НА ФУНК
{
    cout << y(x) << endl;
}

int main()
{
    setupConsole();

    float x = 0.6;
    float y = 0.3;
    float z = 0.1;

    cout << "f1(x) = ";
    print(x, f1);

    cout << "f2(y) = ";
    print(y, f2);

    cout << "f3(z) = ";
    print(z, f3);

    float R = f1(x) + f2(y) * f3(f2(z));

    cout << "R(x, y, z) = " << R << endl;

    return 0;
}
