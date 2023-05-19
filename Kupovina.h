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

    kupovina p[n];
}