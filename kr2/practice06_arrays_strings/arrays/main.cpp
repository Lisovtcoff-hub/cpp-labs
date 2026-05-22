#include <iostream>
#include "console_utils.h"
using namespace std;

int main()
{
    setupConsole();

    int ROWS, COLS;

    cout << "Введите количество строк: ";
    cin >> ROWS;

    cout << "Введите количество столбцов: ";
    cin >> COLS;

    int** arr = new int* [ROWS];

    for (int i = 0; i < ROWS; i++)
    {
        arr[i] = new int[COLS];
    }

    cout << "Введите элементы массива:" << endl;

    for (int i = 0; i < COLS; i++)
    {
        cout << i + 1 << " ";
    }

    cout << endl;

    for (int i = 0; i < COLS; i++)
    {
        cout << "--";
    }

    cout << endl;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cin >> arr[i][j];
        }
    }

    int K;
    cout << "Введите номер столбца K: ";
    cin >> K;

    K--;

    if (K < 0 || K >= COLS)
    {
        cout << "Ошибка: такого столбца нет." << endl;

        for (int i = 0; i < ROWS; i++)
        {
            delete[] arr[i];
        }

        delete[] arr;

        return 0;
    }

    for (int i = 0; i < ROWS - 1; i++)
    {
        for (int r = 0; r < ROWS - i - 1; r++)
        {
            if (arr[r][K] > arr[r + 1][K])
            {
                for (int j = 0; j < COLS; j++)
                {
                    int temp = arr[r][j];
                    arr[r][j] = arr[r + 1][j];
                    arr[r + 1][j] = temp;
                }
            }
        }
    }

    cout << "Массив после сортировки строк по столбцу " << K + 1 << ":" << endl;

    for (int i = 0; i < COLS; i++)
    {
        cout << i + 1 << " ";
    }

    cout << endl;

    for (int i = 0; i < COLS; i++)
    {
        cout << "--";
    }

    cout << endl;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < ROWS; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}
