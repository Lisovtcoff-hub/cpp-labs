#include <iostream>
#include <cmath>
#include "console_utils.h"
using namespace std;

float max(float x, float y)
{
    if (x > y)
        return x;
    return y;
}

float min(float x, float y)
{
    if (x < y)
        return x;
    return y;
}

float max(float arr[], int k)
{
    float maximum = arr[0];

    for (int i = 1; i < k; i++)
        maximum = max(maximum, arr[i]);

    return maximum;
}

float min(float arr[], int k)
{
    float minimum = arr[0];

    for (int i = 1; i < k; i++)
        minimum = min(minimum, arr[i]);

    return minimum;
}

int main()
{
    setupConsole();

    int k1, k2;

    cout << "Введите размер первого массива: ";
    cin >> k1;

    cout << "Введите размер второго массива: ";
    cin >> k2;

    float* arr1 = new float[k1];
    float* arr2 = new float[k2];

    cout << "Введите элементы первого массива:" << endl;

    for (int i = 0; i < k1; i++)
        cin >> arr1[i];

    cout << "Введите элементы второго массива:" << endl;

    for (int i = 0; i < k2; i++)
        cin >> arr2[i];

    float min1 = min(arr1, k1);
    float min2 = min(arr2, k2);

    float max1 = max(arr1, k1);
    float max2 = max(arr2, k2);

    float productMin = min1 * min2;
    float geomMax = sqrt(max1 * max2);

    cout << "Минимум первого массива: " << min1 << endl;
    cout << "Минимум второго массива: " << min2 << endl;

    cout << "Максимум первого массива: " << max1 << endl;
    cout << "Максимум второго массива: " << max2 << endl;

    cout << "Произведение минимумов: " << productMin << endl;
    cout << "Среднее геометрическое максимумов: " << geomMax << endl;

    delete[] arr1;
    delete[] arr2;

    return 0;
}
