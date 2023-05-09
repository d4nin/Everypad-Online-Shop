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
    int opcijaZaProfil;
    cout << "1. Registracija\n";
    cout << "2. Prijava\n\n";
    cout << "(Koristite brojeve izmedju 1 - 2)";
    cin >> opcijaZaProfil;
    SetConsoleTextAttribute(h, 7);
    return 0;
}