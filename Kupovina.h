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
        proizvodi << p[i].cijena << 'KM\n';
        system("CLS");
    }
}