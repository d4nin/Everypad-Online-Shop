#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void Kupovina() {
    system("CLS");
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 14);
    cout << "Lorem ipsum\n";
}