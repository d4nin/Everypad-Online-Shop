#include <iostream>
#include <windows.h>
using namespace std;

void ONama() {
    system("CLS");
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    
    SetConsoleTextAttribute(h, 7);
}