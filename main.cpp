#include <iostream>
#include <windows.h>
#include <iomanip>
#include <fstream>
#include <string>
#include "title.h"
using namespace std;

fstream username("username.txt", ios::in | ios::out | ios::app);
fstream password("lozinka.txt", ios::in | ios::out | ios::app);

void Registracija() {
    string korisnicka, lozinka;
    cout << "Unesite korisnicko ime:\n";
    cin >> korisnicka;

    if(!username) cout << "Problem sa datotekom!\n";
    else username << korisnicka;

    cout << endl;

    cout << "Unesite lozinku:\n";
    cin >> lozinka;

    if(!password) cout << "Problem sa datotekom!\n";
    else password << lozinka;
}

void Prijava() {
    string korisnicka, lozinka;

    username.seekg(0, ios::beg);
    password.seekg(0, ios::beg);

    getline(username, korisnicka);
    getline(password, lozinka);

    string korisnickaPrijava, lozinkaPrijava;

    int i(3), j(3);
    cout << "Unesite korisnicko ime:\n";
    unos1:cin >> korisnickaPrijava;
    if(korisnickaPrijava != korisnicka) {
        cout << "Netacno. Pokusaj te ponovo:\n";
        goto unos1;
    }

    cout << endl;

    cout << "Unesite lozinku:\n";
    unos2:cin >> lozinkaPrijava;
    if(lozinkaPrijava != lozinka) {
        cout << "Netacno. Pokusaj te ponovo:\n";
        goto unos2;
    }
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
            system("CLS");
            Registracija();
            break;
        case 2:
            system("CLS");
            Prijava();
            break;
        default:
            cout << "Morate unijeti brojeve izmedju 1 - 2! Pokusaj te ponovo:\n";
            goto unos;
    }
    SetConsoleTextAttribute(h, 7);
    return 0;
}