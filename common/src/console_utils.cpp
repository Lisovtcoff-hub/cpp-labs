#include "console_utils.h"
#include <clocale>
#include <iostream>

#ifdef _WIN32
#define NOMINMAX
#include <windows.h>
#endif

void setupConsole() {
#ifdef _WIN32
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
#endif

    if (std::setlocale(LC_ALL, ".UTF-8") == nullptr &&
        std::setlocale(LC_ALL, ".UTF8") == nullptr) {
        std::setlocale(LC_ALL, "");
    }
}

void printSeparator() {
    std::cout << "------------------------------\n";
}
