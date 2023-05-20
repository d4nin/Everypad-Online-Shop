#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

ofstream proizvodi("proizvodi.txt");

struct kupovina {
    string model;
    int cijena;
    string kategorija;
    string brend;
};

bool sortPoKategoriji(kupovina a, kupovina b) {
    return a.kategorija < b.kategorija;
}
bool sortPoModelu(kupovina a, kupovina b) {
    return a.model < b.model;
}
bool sortPoMarki(kupovina a, kupovina b) {
    return a.brend < b.brend;
}
bool sortPoCijeni(kupovina a, kupovina b) {
    return a.cijena < b.cijena;
}

void Sortiranje(kupovina p[], int n) {
    ofstream sortiranje("sortiranje.txt");
    system("CLS");
    int opcija;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    if(!sortiranje) {
        cout << "Problem sa otvaranjem datoteke!\n";
    } 
    else {
        SetConsoleTextAttribute(h, 14);
        cout << "Odaberite nacin sortiranja:\n";
        SetConsoleTextAttribute(h, 12);
        cout << "1. Sort prema kategoriji\n";
        cout << "2. Sort prema modelu\n";
        cout << "3. Sort prema brendu\n";
        cout << "4. Sort prema cijeni\n\n";
        SetConsoleTextAttribute(h, 7);
        unos:cin >> opcija;

        switch(opcija) {
            case 1:
                sort(p, p + n, sortPoKategoriji);
                sortiranje << "ODABIR SORTIRANJA - Sort prema kategoriji:\n\n";
                for(int i = 0; i < n; i++) {
                    sortiranje << p[i].kategorija << ", " << p[i].model << ", " << p[i].brend << ", " << p[i].cijena << "KM\n";
                }
                cout << "Napravljena je datoteka 'sortiranje.txt', unutra se nalaze sortirani podaci.\n";
                sortiranje.close();
                break;
            case 2:
                sort(p, p + n, sortPoModelu);
                sortiranje << "ODABIR SORTIRANJA - Sort prema modelu:\n\n";
                for(int i = 0; i < n; i++) {
                    sortiranje << p[i].model << ", " << p[i].kategorija << ", " << p[i].brend << ", " << p[i].cijena << "KM\n";
                }
                cout << "Napravljena je datoteka 'sortiranje.txt', unutra se nalaze sortirani podaci.\n";
                sortiranje.close();
                break;
            case 3:
                sort(p, p + n, sortPoMarki);
                sortiranje << "ODABIR SORTIRANJA - Sort prema marki:\n\n";
                for(int i = 0; i < n; i++) {
                    sortiranje << p[i].brend << ", " << p[i].kategorija << ", " << p[i].model << ", " << p[i].cijena << "KM\n";
                }
                cout << "Napravljena je datoteka 'sortiranje.txt', unutra se nalaze sortirani podaci.\n";
                sortiranje.close();
                break;
            case 4:
                sort(p, p + n, sortPoCijeni);
                sortiranje << "ODABIR SORTIRANJA - Sort prema cijeni:\n\n";
                for(int i = 0; i < n; i++) {
                    sortiranje << p[i].cijena << "KM, " << p[i].kategorija << ", " << p[i].model << ", " << p[i].brend << '\n';
                }
                cout << "Napravljena je datoteka 'sortiranje.txt', unutra se nalaze sortiranje podaci.\n";
                sortiranje.close();
                break;
            default:
                cout << "Morate unijeti broj izmedju 1 - 4! Pokusaj te ponovo:\n";
                goto unos;
        }
    }
}

void BinarnaPretraga(kupovina p[], int n) {
    ofstream binarnapretraga("binarna_pretraga.txt");
    system("CLS");
    int opcija;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    if(!binarnapretraga) {
        cout << "Problem sa otvaranjem datoteke!\n";
    }
    else {
        SetConsoleTextAttribute(h, 14);
        int opcija;
        cout << "Unesite koju binarnu pretragu zelite da koristite:\n";
        SetConsoleTextAttribute(h, 12);
        cout << "1. Binarna pretraga kategorija\n";
        cout << "2. Binarna pretraga modela\n";
        cout << "3. Binarna pretraga brendova\n";
        cout << "4. Binarna pretraga cijena\n\n";
        SetConsoleTextAttribute(h, 7);
        unos:cin >> opcija;

        string kategorija, model, brend;
        int cijena;
        if(opcija == 1) { //Switch case ne radi za binarnu pretragu, nemogu se praviti varijable unutar njih.
            for(int i = 0; i < n; i++) {
                    for(int j = 0; j < n - 1 - i; j++) {
                        if(p[j].kategorija > p[j + 1].kategorija) {
                            string temp = p[j + 1].kategorija;
                            p[j + 1].kategorija = p[j].kategorija;
                            p[j].kategorija = temp;
                        }
                    }
                }
                cout << "Unesite kategoriju za pretragu:\n";
                cin.ignore();
                getline(cin, kategorija);

                int poz(0);
                bool pronadjen(false);
                int l(0), d = n - 1;
                while(l <= d) {
                    int s = (l + d) / 2;
                    if(p[s].kategorija == kategorija) {
                        poz = s;
                        pronadjen = true;
                        break;
                    }
                    else if(p[s].kategorija < kategorija) {
                        l = s + 1;
                    }
                    else {
                        d = s - 1;
                    }
                }
                binarnapretraga << "ODABIR BINARNE PRETRAGE: po kategoriji:\n\n";
                if(pronadjen) {
                    binarnapretraga << "Kategorija " << kategorija << " se nalazi na " << poz + 1 << ". poziciji.\n";
                }
                else {
                    binarnapretraga << "Kategorija " << kategorija << " nije u nizu!\n";
                }
                cout << "Napravljena je datoteka 'binarna_pretraga.txt', unutra se nalazi rezultat binarne pretrage.\n";
                binarnapretraga.close();
        }
        else if(opcija == 2) {
            for(int i = 0; i < n; i++) {
                    for(int j = 0; j < n - 1 - i; j++) {
                        if(p[j].model > p[j + 1].model) {
                            string temp = p[j + 1].model;
                            p[j + 1].model = p[j].model;
                            p[j].model = temp;
                        }
                    }
                }
                cout << "Unesite model za pretragu:\n";
                cin.ignore();
                getline(cin, model);

                int poz(0);
                bool pronadjen(false);
                int l(0), d = n - 1;
                while(l <= d) {
                    int s = (l + d) / 2;
                    if(p[s].model == model) {
                        poz = s;
                        pronadjen = true;
                        break;
                    }
                    else if(p[s].model < model) {
                        l = s + 1;
                    }
                    else {
                        d = s - 1;
                    }
                }
                binarnapretraga << "ODABIR BINARNE PRETRAGE: po modelu:\n\n";
                if(pronadjen) {
                    binarnapretraga << "Model " << model << " se nalazi na " << poz + 1 << ". poziciji.\n";
                }
                else {
                    binarnapretraga << "Model " << model << " nije u nizu!\n";
                }
                cout << "Napravljena je datoteka 'binarna_pretraga.txt', unutra se nalazi rezultat binarne pretrage.\n";
                binarnapretraga.close();
        }
        else if(opcija == 3) {
            for(int i = 0; i < n; i++) {
                    for(int j = 0; j < n - 1 - i; j++) {
                        if(p[j].brend > p[j + 1].brend) {
                            string temp = p[j + 1].brend;
                            p[j + 1].brend = p[j].brend;
                            p[j].brend = temp;
                        }
                    }
                }
                cout << "Unesite brend za pretragu:\n";
                cin.ignore();
                getline(cin, brend);

                int poz(0);
                bool pronadjen(false);
                int l(0), d = n - 1;
                while(l <= d) {
                    int s = (l + d) / 2;
                    if(p[s].brend == brend) {
                        poz = s;
                        pronadjen = true;
                        break;
                    }
                    else if(p[s].brend < brend) {
                        l = s + 1;
                    }
                    else {
                        d = s - 1;
                    }
                }
                binarnapretraga << "ODABIR BINARNE PRETRAGE: po brendu:\n\n";
                if(pronadjen) {
                    binarnapretraga << "Brend" << brend << " se nalazi na " << poz + 1 << ". poziciji.\n";
                }
                else {
                    binarnapretraga << "Brend" << brend << " nije u nizu!\n";
                }
                cout << "Napravljena je datoteka 'binarna_pretraga.txt', unutra se nalazi rezultat binarne pretrage.\n";
                binarnapretraga.close();
        }
        else if(opcija == 4) {
            for(int i = 0; i < n; i++) {
                    for(int j = 0; j < n - 1 - i; j++) {
                        if(p[j].cijena > p[j + 1].cijena) {
                            int temp = p[j + 1].cijena;
                            p[j + 1].cijena = p[j].cijena;
                            p[j].cijena = temp;
                        }
                    }
                }
                cout << "Unesite cijenu za pretragu:\n";
                cin >> cijena;

                int poz(0);
                bool pronadjen(false);
                int l(0), d = n - 1;
                while(l <= d) {
                    int s = (l + d) / 2;
                    if(p[s].cijena == cijena) {
                        poz = s;
                        pronadjen = true;
                        break;
                    }
                    else if(p[s].cijena < cijena) {
                        l = s + 1;
                    }
                    else {
                        d = s - 1;
                    }
                }
                binarnapretraga << "ODABIR BINARNE PRETRAGE: po cijeni:\n\n";
                if(pronadjen) {
                    binarnapretraga << "Cijena od " << cijena << "KM se nalazi na " << poz + 1 << ". poziciji.\n";
                }
                else {
                    binarnapretraga << "Cijena od " << cijena << "KM nije u nizu!\n";
                }
                cout << "Napravljena je datoteka 'binarna_pretraga.txt', unutra se nalazi rezultat binarne pretrage.\n";
                binarnapretraga.close();
        }
        else {
            cout << "Morate dodati broj izmedju 1 - 4! Pokusaj te ponovo:\n";
            goto unos;
        }
        SetConsoleTextAttribute(h, 7);
    }
}

void Narudzba(kupovina p[], int n) {
    ofstream narudzba("narudzba.txt");
    system("CLS");
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    if(!narudzba) {
        cout << "Problem sa otvaranjem datoteke!\n";
    }
    else {
        SetConsoleTextAttribute(h, 14);
        int opcija;
        cout << "Izaberite proizvode koje zelite kupiti (0 za kraj):\n";
        SetConsoleTextAttribute(h, 12);
        for(int i = 0; i < n; i++) {
            cout << i + 1 << ". " << p[i].model << " " << p[i].cijena << "KM\n";
        }
        cout << endl;
        SetConsoleTextAttribute(h, 7);
        cin >> opcija;
        vector<kupovina> Proizvodi;
        while(opcija != 0) {
            if(opcija >= 0 && opcija <= n) {
                Proizvodi.push_back(p[opcija - 1]);
            }
            else {
                cout << "Morate unijeti broj izmedju 1 - 4! Pokusaj te ponovo:\n";
            }
            cin >> opcija;
        }   
        float suma(0);
        narudzba << "MODELI ZA NARUDZBU:\n";
        for(int i = 0; i < Proizvodi.size(); i++) {
            suma += Proizvodi[i].cijena;
            narudzba << Proizvodi[i].model << ", " << Proizvodi[i].cijena << "KM\n";
        }
        narudzba << "UKUPNA CIJENA: " << suma << "KM\n\n";

        SetConsoleTextAttribute(h, 10);
        cout << setw(25) << "UKUPNA CIJENA: " << suma << "KM\n\n";
        int brojKartice, datumIstekaMjesec, datumIstekaGodina, CVV, zipCode, brojTelefona;
        string imeprezime, grad, adresa, drzava;
        SetConsoleTextAttribute(h, 12);
        cout << "UNESITE BROJ KREDITNE KARTICE:\n";
        SetConsoleTextAttribute(h, 7);
        cin >> brojKartice;
        narudzba << "Broj kartice: " << brojKartice << '\n';

        SetConsoleTextAttribute(h, 12);
        cout << "UNESITE DATUM ISTEKA KARTICE:\n";
        SetConsoleTextAttribute(h, 7);
        cin >> datumIstekaMjesec >> datumIstekaGodina;
        SetConsoleTextAttribute(h, 12);
        narudzba << "Datum isteka: " << datumIstekaMjesec << " " << datumIstekaGodina << '\n';

        cout << "UNESITE BROJ CVV KARTICE:\n";
        SetConsoleTextAttribute(h, 7);
        cin >> CVV;
        narudzba << "Broj CVV: " << CVV << '\n';
        
        SetConsoleTextAttribute(h, 12);
        cout << "UNESITE IME I PREZIME:\n";
        SetConsoleTextAttribute(h, 7);
        cin.ignore();
        getline(cin, imeprezime);
        narudzba << "Ime i prezime: " << imeprezime << '\n';
        
        SetConsoleTextAttribute(h, 12);
        cout << "UNESITE GRAD STANOVANJA:\n";
        SetConsoleTextAttribute(h, 7);
        getline(cin, grad);
        narudzba << "Grad: " << grad << '\n';
        
        SetConsoleTextAttribute(h, 12);
        cout << "UNESITE ADRESU STANOVANJA:\n";
        SetConsoleTextAttribute(h, 7);
        getline(cin, adresa);
        narudzba << "Adresa: " << adresa << '\n';
        
        SetConsoleTextAttribute(h, 12);
        cout << "UNESITE POSTAL KOD:\n";
        SetConsoleTextAttribute(h, 7);
        cin >> zipCode;
        narudzba << "Postal kod: " << zipCode << '\n';
        
        SetConsoleTextAttribute(h, 12);
        cout << "UNESITE DRZAVU:\n";
        SetConsoleTextAttribute(h, 7);
        cin.ignore();
        getline(cin, drzava);
        narudzba << "Drzava: " << drzava << '\n';
        
        SetConsoleTextAttribute(h, 12);
        cout << "UNESITE BROJ TELEFONA:\n";
        SetConsoleTextAttribute(h, 7);
        cin >> brojTelefona;
        narudzba << "Broj telefona: " << brojTelefona << '\n';
        
        system("CLS");
        cout << "Hvala vam na narudzbi. Vasa narudzba ce doci za sedmice.\n";
    }
}

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
        cout << "Unesite cijenu " << i + 1 << ". proizvoda (U konvertibilnim markama):\n";
        cin >> p[i].cijena;
        proizvodi << p[i].cijena << "KM\n";
        system("CLS");
    }

    int opcija;
    SetConsoleTextAttribute(h, 14);
    cout << "Izaberite sta zelite sa proizvodima!\n";
    SetConsoleTextAttribute(h, 12);
    cout << "1. Sortiranje\n";
    cout << "2. Binarna Pretraga\n";
    cout << "3. Narudzba\n\n";
    SetConsoleTextAttribute(h, 7);
    unos:cin >> opcija;

    switch(opcija) {
        case 1:
            Sortiranje(p, n);
            break;
        case 2:
            BinarnaPretraga(p, n);
            break;
        case 3:
            Narudzba(p, n);
            break;
        default:
            cout << "Morate unijeti broj izmedju 1 - 3! Pokusaj te ponovo:\n";
            goto unos;
    }

    SetConsoleTextAttribute(h, 7);
}