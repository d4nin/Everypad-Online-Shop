#include <iostream>
#include <windows.h>
using namespace std;

void title() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 10);
    cout << "-------------------------\n";
    cout << "|    E V E R Y P A D    |\n";
    cout << "-------------------------\n";
    SetConsoleTextAttribute(h, 7);
}