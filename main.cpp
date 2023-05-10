#include <iostream>
#include <windows.h>
#include <iomanip>
#include <fstream>
#include <string>
#include "title.h"
using namespace std;

fstream username("username.txt", ios::out);
fstream password("lozinka.txt", ios::out);

void Registracija() {
    string korisnicka, lozinka;
    cout << "Unesite korisnicko ime:\n";
    cin >> korisnicka;

    if(!username) cout << "Problem sa datotekom!\n";
    else username << korisnicka;
    
    cout << endl;

    cout << "Unesite lozinku:\n\n";
    cin >> lozinka;

    if(!password) cout << "Problem sa datotekom!\n";
    else password << lozinka;
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
            Registracija();
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