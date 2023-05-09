#include <iostream>
#include <windows.h>
using namespace std;

void title() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 10);
    cout << "Everypad";
    SetConsoleTextAttribute(h, 7);
}