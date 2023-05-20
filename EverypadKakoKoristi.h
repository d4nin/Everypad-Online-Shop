#include <iostream>
#include <windows.h>
using namespace std;

void korist() {
    system("CLS");
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(h, 10);
    cout << "-------------------------------\n";
    cout << "|   KAKO KORISTITI EVERYPAD   |\n";
    cout << "-------------------------------\n\n\n";

    SetConsoleTextAttribute(h, 14);
    cout << "Everypad je veoma lahko koristiti. Jednostavno kliknete na opciju 'kupovina' i mozete kupiti razne proizvode.\n";
    cout << "Nakon odabira artikala, ponudena vam je opcija za zavrsetak transakcije, sortiranje artikala i pretrazivaje podataka proizvoda.\n";
    cout << "Tokom zavrsetka transakcije morate unijeti vase puno ime, adresu stanovanja, drzavnu i grad stanovanja, postanski broj i vas broj telefona.\n\n";
    
    SetConsoleTextAttribute(h, 12);
    cout << "Ako vas naruceni artikal nedostavimo u roku od dvije sedmice, imate opciju povrata novca.\n\n";
    
    SetConsoleTextAttribute(h, 14);
    cout << "Sretna kupovina! :)\n";   
}