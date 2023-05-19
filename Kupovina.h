#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

ofstream proizvodi("proizvodi.txt");

struct kupovina {
    string model;
    int cijena;
    string kategorija;
    string brend;
};

bool sortPoKategoriji(kupovina a, kupovina b) {
    return a.kategorija < b.kategorija;
}
bool sortPoModelu(kupovina a, kupovina b) {
    return a.model < b.model;
}
bool sortPoMarki(kupovina a, kupovina b) {
    return a.model < b.model;
}
bool sortPoCijeni(kupovina a, kupovina b) {
    return a.cijena < a.cijena;
}

void Sortiranje(kupovina p[], int n) {
    ofstream sortiranje("sortiranje.txt");
    system("CLS");
    int opcija;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(h, 14);
    cout << "Odaberite nacin sortiranja:\n";
    SetConsoleTextAttribute(h, 12);
    cout << "1. Sort prema kategoriji\n";
    cout << "2. Sort prema modelu\n";
    cout << "3. Sort prema marki\n";
    cout << "4. Sort prema cijeni\n\n";
    SetConsoleTextAttribute(h, 7);
    unos:cin >> opcija;

    switch(opcija) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            cout << "Morate unijeti broj izmedju 1 - 4! Pokusaj te ponovo:\n";
            goto unos;
    }
}

void BinarnaPretraga(kupovina p[], int n) {
    cout << "Yooo ovo je binarna pretragaaaaa\n";
}

void Narudzba(kupovina p[], int n) {
    cout << "Yooooo ovo je narudzbaaaa\n";
}

void Kupovina() {
    system("CLS");
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 14);

    int n;
    cout << "Unesite broj proizvoda:\n";
    cin >> n;
    system("CLS");

    kupovina p[n];
    for(int i = 0; i < n; i++) {
        SetConsoleTextAttribute(h, 4);
        cout << "Unesite kategoriju " << i + 1 << ". proizvoda:\n";
        cin.ignore();
        getline(cin, p[i].kategorija);
        cout << '\n';
        proizvodi << p[i].kategorija << " ";

        SetConsoleTextAttribute(h, 10);
        cout << "Unesite model " << i + 1 << ". proizvoda:\n";
        getline(cin, p[i].model);
        cout << '\n';
        proizvodi << p[i].model << " ";

        SetConsoleTextAttribute(h, 11);
        cout << "Unesite marku " << i + 1 << ". proizvoda:\n";
        getline(cin, p[i].brend);
        cout << '\n';
        proizvodi << p[i].brend << " ";

        SetConsoleTextAttribute(h, 9);
        cout << "Unesite cijenu " << i + 1 << ". proizvoda:\n";
        cin >> p[i].cijena;
        proizvodi << p[i].cijena << '\n';
        system("CLS");
    }

    int opcija;
    SetConsoleTextAttribute(h, 14);
    cout << "Izaberite sta zelite sa proizvodima!\n";
    SetConsoleTextAttribute(h, 12);
    cout << "1. Sortiranje\n";
    cout << "2. Binarna Pretraga\n";
    cout << "3. Narudzba\n\n";
    SetConsoleTextAttribute(h, 7);
    unos:cin >> opcija;

    switch(opcija) {
        case 1:
            Sortiranje(p, n);
            break;
        case 2:
            BinarnaPretraga(p, n);
            break;
        case 3:
            Narudzba(p, n);
            break;
        default:
            cout << "Morate unijeti broj izmedju 1 - 3! Pokusaj te ponovo:\n";
            goto unos;
    }

    SetConsoleTextAttribute(h, 7);
}