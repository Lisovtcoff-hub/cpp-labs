#include <iostream>
#include "console_utils.h"
using namespace std;

double power(double x, int a)
{
    if (a == 0)
        return 1;
    else
    {
        if (a % 2 == 0)
        {
            double y = power(x, a / 2);
            return y * y;
        }else
            return x * power(x, a - 1);
    }
}

int main()
{
    setupConsole();

    double x;
    int a;

    cout << "Введите x: ";
    cin >> x;

    cout << "Введите степень a: ";
    cin >> a;

    if (a < 0)
    {
        cout << "Ошибка: степень должна быть неотрицательной." << endl;
        return 0;
    }

    cout << "y = " << power(x, a) << endl;

    return 0;
}
