#include <iostream>
#include "console_utils.h"
using namespace std;

void swal(int* x, int* y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main()
{
    setupConsole();

    int x, y;

    cout << "Введите x: ";
    cin >> x;

    cout << "Введите y: ";
    cin >> y;

    cout << "До обмена:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    swal(&x, &y);

    cout << "После обмена:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
