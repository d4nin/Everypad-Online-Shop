#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
using namespace std;

struct kupovina {
    string imeArtikla;
    int cijena;
    string periferija;
    string brend;
};

void Kupovina() {
    system("CLS");
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 14);
    cout << "Lorem ipsum\n";
}