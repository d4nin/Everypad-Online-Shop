#include <iostream>
#include <windows.h>
#include <iomanip>
#include "Onama.h"
#include "EverypadKakoKoristi.h" 
using namespace std;

void MainMenu(string korisnicka) {
    system("CLS");
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(h, 2);
    cout << setw(25) << "Dobro dosli, ";
    SetConsoleTextAttribute(h, 3);
    cout << korisnicka << '\n';
    cout << endl << endl;

    SetConsoleTextAttribute(h, 10);
    int opcija;
    cout << "1. Kupovina\n";
    cout << "2. Kako koristiti Everypad\n";
    cout << "3. O nama\n\n";
    SetConsoleTextAttribute(h, 7);
    unos:cin >> opcija;
    switch(opcija) {
        case 1:
            cout << "Lorem ipsum";
            break;
        case 2:
            korist();
            break;
        case 3:
            ONama();
            break;
        default: 
            cout << "Morate unijeti broj izmedju 1 - 3! Pokusaj te ponovo!\n";
            goto unos;
    }
    SetConsoleTextAttribute(h, 7);
}