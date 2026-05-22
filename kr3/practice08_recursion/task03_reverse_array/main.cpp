#include <iostream>
#include "console_utils.h"
using namespace std;

void printReverse(int arr[], int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << arr[n - 1] << " ";
        printReverse(arr, n - 1);
    }
}

int main()
{
    setupConsole();

    int n;

    cout << "Введите размер массива: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Введите элементы массива:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Массив в обратном порядке:" << endl;

    printReverse(arr, n);

    delete[] arr;

    return 0;
}
