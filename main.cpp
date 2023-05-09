#include <iostream>
#include <windows.h>
#include <iomanip>
#include "title.h"
using namespace std;

int main() {
    title();
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 10);
    cout << setw(25) << "IZABERITE OPCIJU:\n";
    SetConsoleTextAttribute(h, 7);
    return 0;
}