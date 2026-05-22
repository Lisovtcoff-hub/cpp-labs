#include <iostream>
#include <cmath>
#include "console_utils.h"
using namespace std;

double sqrt_rec(double a, int tochnost)
{
    if (tochnost == 0)
        return (1 + a) / 2;
    else
    {
        double x = sqrt_rec(a, tochnost - 1);
        return 0.5 * (x + a / x);
    }
}

int main()
{
    setupConsole();

    double x = 2;

    cout << sqrt(x) << endl;

    int t = 6;

    cout << sqrt_rec(x, t) << endl;

    return 0;
}
