#include <iostream>
#include "console_utils.h"
using namespace std;

int sumDigits(int n)
{
    if (n < 10)
        return n;
    else
        return n % 10 + sumDigits(n / 10);
}

int main()
{
    setupConsole();

    int n;

    cout << "Введите N: ";
    cin >> n;

    cout << "Сумма цифр: " << sumDigits(n) << endl;

    return 0;
}
