#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;

ofstream proizvodi("proizvodi.txt");

struct kupovina {
    string model;
    int cijena;
    string kategorija;
    string brend;
};

void Sortiranje(kupovina p[], int n);
void BinarnaPretraga(kupovina p[], int n);
void Narudzba(kupovina p[], int n);

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
            cout << "Lorem ipsum\n";
            break;
        case 2:
            cout << "Idk lorem ipsum\n";
            break;
        case 3:
            cout << "XD LOL LMFAO LMAO ROFL\n";
            break;
        default:
            cout << "Morate unijeti broj izmedju 1 - 3! Pokusaj te ponovo:\n";
            goto unos;
    }

    SetConsoleTextAttribute(h, 7);
}