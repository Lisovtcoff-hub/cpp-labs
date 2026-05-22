#include <iostream>
#include "console_utils.h"
using namespace std;

double proizvedenie(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        double chislitel, znamenatel;

        if (n % 2 == 1)
        {
            chislitel = n + 1;
            znamenatel = n;
        }
        else
        {
            chislitel = n;
            znamenatel = n + 1;
        }

        return proizvedenie(n - 1) * chislitel / znamenatel;
    }
}

int main()
{
    setupConsole();

    int n;

    cout << "Введите количество сомножителей n: ";
    cin >> n;

    if (n < 2 || n % 2 != 0)
    {
        cout << "Ошибка: n должно быть четным и не меньше 2." << endl;
        return 0;
    }

    cout << "y = " << proizvedenie(n) << endl;

    return 0;
}
