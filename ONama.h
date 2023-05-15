#include <iostream>
#include <windows.h>
using namespace std;

void ONama() {
    system("CLS");
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(h, 14);
    cout << "Everpad je vodeci online shop za racunare i racunarsku opremu. Nasa misija je da pruzimo vrhunsku tehnologiju i najnovije proizvode na trzistu,\n";
    cout << "kako bi nasi kupci bili opremljeni najboljim alatima za svoje digitalne potrebe.\n";
    SetConsoleTextAttribute(h, 7);
}