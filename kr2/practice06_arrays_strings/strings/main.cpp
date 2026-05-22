#include <iostream>
#include "console_utils.h"
using namespace std;

int main()
{
    setupConsole();

    const int SIZE = 1000;
    const int MAX_WORDS = 200;
    const int WORD_SIZE = 100;

    char text[SIZE];
    char words[MAX_WORDS][WORD_SIZE];

    cout << "Введите текст: ";
    cin.getline(text, SIZE);

    int wordCount = 0;
    int letterCount = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] != ' ')
        {
            words[wordCount][letterCount] = text[i];
            letterCount++;
        }
        else
        {
            if (letterCount > 0)
            {
                words[wordCount][letterCount] = '\0';

                int len = 0;

                while (words[wordCount][len] != '\0')
                {
                    len++;
                }

                while (len > 0 &&
                    (words[wordCount][len - 1] == '.' ||
                        words[wordCount][len - 1] == ',' ||
                        words[wordCount][len - 1] == ':' ||
                        words[wordCount][len - 1] == ';' ||
                        words[wordCount][len - 1] == '!' ||
                        words[wordCount][len - 1] == '?'))
                {
                    words[wordCount][len - 1] = '\0';
                    len--;
                }

                wordCount++;
                letterCount = 0;
            }
        }
    }

    if (letterCount > 0)
    {
        words[wordCount][letterCount] = '\0';

        int len = 0;

        while (words[wordCount][len] != '\0')
        {
            len++;
        }

        while (len > 0 &&
            (words[wordCount][len - 1] == '.' ||
                words[wordCount][len - 1] == ',' ||
                words[wordCount][len - 1] == ':' ||
                words[wordCount][len - 1] == ';' ||
                words[wordCount][len - 1] == '!' ||
                words[wordCount][len - 1] == '?'))
        {
            words[wordCount][len - 1] = '\0';
            len--;
        }

        wordCount++;
    }

    cout << "Количество магазинов:" << endl;

    for (int i = 0; i < wordCount; i++)
    {
        bool isGorode = true;
        char gorode[] = "городе";

        int p = 0;

        while (words[i][p] != '\0' && gorode[p] != '\0')
        {
            if (words[i][p] != gorode[p])
            {
                isGorode = false;
            }

            p++;
        }

        if (words[i][p] != '\0' || gorode[p] != '\0')
        {
            isGorode = false;
        }

        if (isGorode)
        {
            int j = i + 1;
            bool numberFound = false;

            while (j < wordCount && !numberFound)
            {
                bool isNumber = true;

                if (words[j][0] == '\0')
                {
                    isNumber = false;
                }

                for (int k = 0; words[j][k] != '\0'; k++)
                {
                    if (words[j][k] < '0' || words[j][k] > '9')
                    {
                        isNumber = false;
                    }
                }

                if (isNumber)
                {
                    numberFound = true;
                }
                else
                {
                    j++;
                }
            }

            if (numberFound)
            {
                for (int k = i + 1; k < j; k++)
                {
                    cout << words[k];

                    if (k != j - 1)
                    {
                        cout << " ";
                    }
                }

                int number = 0;

                for (int k = 0; words[j][k] != '\0'; k++)
                {
                    number = number * 10 + words[j][k] - '0';
                }

                cout << " - " << number << endl;
            }
        }

        bool isV = true;
        char v[] = "в";

        int p2 = 0;

        while (words[i][p2] != '\0' && v[p2] != '\0')
        {
            if (words[i][p2] != v[p2])
            {
                isV = false;
            }

            p2++;
        }

        if (words[i][p2] != '\0' || v[p2] != '\0')
        {
            isV = false;
        }

        bool isBigV = true;
        char bigV[] = "В";

        p2 = 0;

        while (words[i][p2] != '\0' && bigV[p2] != '\0')
        {
            if (words[i][p2] != bigV[p2])
            {
                isBigV = false;
            }

            p2++;
        }

        if (words[i][p2] != '\0' || bigV[p2] != '\0')
        {
            isBigV = false;
        }

        if (isBigV)
        {
            isV = true;
        }

        if (isV)
        {
            int j = i + 1;
            bool numberFound = false;

            while (j < wordCount && !numberFound)
            {
                bool isNumber = true;

                if (words[j][0] == '\0')
                {
                    isNumber = false;
                }

                for (int k = 0; words[j][k] != '\0'; k++)
                {
                    if (words[j][k] < '0' || words[j][k] > '9')
                    {
                        isNumber = false;
                    }
                }

                if (isNumber)
                {
                    numberFound = true;
                }
                else
                {
                    j++;
                }
            }

            if (numberFound && j + 1 < wordCount)
            {
                bool isMagazinov = true;
                char magazinov[] = "магазинов";

                int p = 0;

                while (words[j + 1][p] != '\0' && magazinov[p] != '\0')
                {
                    if (words[j + 1][p] != magazinov[p])
                    {
                        isMagazinov = false;
                    }

                    p++;
                }

                if (words[j + 1][p] != '\0' || magazinov[p] != '\0')
                {
                    isMagazinov = false;
                }

                if (isMagazinov)
                {
                    for (int k = i + 1; k < j; k++)
                    {
                        cout << words[k];

                        if (k != j - 1)
                        {
                            cout << " ";
                        }
                    }

                    int number = 0;

                    for (int k = 0; words[j][k] != '\0'; k++)
                    {
                        number = number * 10 + words[j][k] - '0';
                    }

                    cout << " - " << number << endl;
                }
            }
        }
    }

    return 0;
}
