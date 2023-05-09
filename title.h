#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void title() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 10);
    cout << "-------------------------\n";
    cout << "|    E V E R Y P A D    |\n";
    cout << "-------------------------\n";
    SetConsoleTextAttribute(h, 12);
    cout << "Dobro dosli u Everypad!\nBroj jedan mjesta za online shopping!\n\n";
    SetConsoleTextAttribute(h, 11);
    cout << "Pritisnite bilo koje dugme da nastavite!\n";
    if(getch()) {
        Beep(500, 400);
    }
    SetConsoleTextAttribute(h, 7);
}