#include <iostream>
#include <windows.h>
using namespace std;

void MainMenu(string korisnicka) {
    system("CLS");
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(h, 2);
    cout << "Dobro dosli, ";
    SetConsoleTextAttribute(h, 3);
    cout << korisnicka << '\n';
    SetConsoleTextAttribute(h, 7);
}