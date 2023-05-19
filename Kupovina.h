#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
using namespace std;

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

        SetConsoleTextAttribute(h, 10);
        cout << "Unesite model " << i + 1 << ". proizvoda:\n";
        getline(cin, p[i].model);
        cout << '\n';

        SetConsoleTextAttribute(h, 11);
        cout << "Unesite marku " << i + 1 << ". proizvoda:\n";
        getline(cin, p[i].brend);
        cout << '\n';

        SetConsoleTextAttribute(h, 9);
        cout << "Unesite cijenu " << i + 1 << ". proizvoda:\n";
        cin >> p[i].cijena;
        system("CLS");
    }
}