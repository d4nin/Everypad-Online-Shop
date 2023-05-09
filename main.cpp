#include <iostream>
#include <windows.h>
#include <iomanip>
#include <fstream>
#include "title.h"
using namespace std;

fstream inf("podaci.txt", ios::in | ios::out | ios::app);

void Registracija() {

}

void Prijava() {

}

int main() {
    title();

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 10);
    cout << setw(25) << "IZABERITE OPCIJU:\n";
    int opcijaZaProfil;
    cout << "1. Registracija\n";
    cout << "2. Prijava\n\n";
    cout << "(Koristite brojeve izmedju 1 - 2)\n";
    SetConsoleTextAttribute(h, 7);
    unos:cin >> opcijaZaProfil;
    switch(opcijaZaProfil) {
        case 1:
            cout << "Lololololol\n";
            break;
        case 2:
            cout << "xdxdxdxdxdxd\n";
            break;
        default:
            cout << "Morate unijeti brojeve izmedju 1 - 2! Pokusaj te ponovo:\n";
            goto unos;
    }
    SetConsoleTextAttribute(h, 7);
    return 0;
}