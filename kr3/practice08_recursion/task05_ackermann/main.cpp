#include <iostream>
#include "console_utils.h"
using namespace std;

int akkerman(int m, int n)
{
    if (m == 0)
        return n + 1;
    else
    {
        if (m > 0 && n == 0)
            return akkerman(m - 1, 1);
        else
            return akkerman(m - 1, akkerman(m, n - 1));
    }
}

int main()
{
    setupConsole();

    int m, n;

    cout << "Введите m: ";
    cin >> m;

    cout << "Введите n: ";
    cin >> n;

    if (m < 0 || n < 0)
    {
        cout << "Ошибка: m и n должны быть неотрицательными." << endl;
        return 0;
    }

    cout << "A(" << m << ", " << n << ") = " << akkerman(m, n) << endl;

    return 0;
}
