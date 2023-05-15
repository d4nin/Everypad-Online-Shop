#include <iostream>
#include <windows.h>
using namespace std;

void ONama() {
    system("CLS");
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 10);
    cout << "--------------\n";
    cout << "|   O NAMA   |\n";
    cout << "--------------\n\n\n";
    SetConsoleTextAttribute(h, 14);
    cout << "Everypad je vodeci online shop za racunare i racunarsku opremu. Nasa misija je da pruzimo vrhunsku tehnologiju i najnovije proizvode na trzistu,\n";
    cout << "kako bi nasi kupci bili opremljeni najboljim alatima za svoje digitalne potrebe.\n\n";
    cout << "Od desktop racunara, laptopova, komponenti, periferija, do softvera - Everypad pruza sirok asortiman proizvoda najpoznatijih svjetskih brendova.\n";
    cout << "Nasa ponuda je pazljivo odabrana kako bismo osigurali da svaki proizvod koji nudimo zadovoljava visoke standarde kvaliteta i performansi.\n\n";
    cout << "U Everypadu smo posveceni pruzanju izvrsne korisnicke usluge.\n";
    cout << "Nasa ljubazna i strucna sluzba za korisnike je uvijek spremna da pomogne i odgovori na sva vasa pitanja.\n";
    cout << "Takoder, nudimo brzu i sigurnu dostavu na svim adresama.\n\n";
    cout << "Kupovina racunarske opreme nikada nije bila jednostavnija.\n";
    cout << "Sa Everypadom, vrhunska tehnologija je na dohvat ruke. Opremite se za buducnost sa Everypadom!\n";
    SetConsoleTextAttribute(h, 7);
}