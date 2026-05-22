#include <iostream>
#include "console_utils.h"
using namespace std;

bool powerOfTwo(int n)
{
    if (n == 1)
    {
        return true;
    }

    if (n % 2 != 0)
    {
        return false;
    }

    return powerOfTwo(n / 2);
}

int main()
{
    setupConsole();

    int n;

    cout << "Введите N: ";
    cin >> n;

    cout << (powerOfTwo(n) ? "YES" : "NO") << endl;

    return 0;
}
