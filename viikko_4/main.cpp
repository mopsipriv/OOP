#include <iostream>
#include "asiakas.h"

using namespace std;

int main() {
    cout << "Luodaan asiakkaat" << endl;
    Asiakas a1("Aapeli", 500);
    Asiakas a2("Bertta", 1000);
    cout << endl;

    cout << "Kayttotili (Aapeli)" << endl;
    a1.talletus(200);
    a1.nosto(50);
    a1.nosto(500);
    a1.showSaldo();
    cout << endl;

    cout << "Luottotili (Aapeli)" << endl;
    a1.luotonNosto(100);
    a1.luotonNosto(600);
    a1.luotonMaksu(50);
    a1.luotonMaksu(100);
    a1.showSaldo();
    cout << endl;

    cout << "Tilisiirto (Aapeli -> Bertta)" << endl;
    cout << "Siirretaan 100 euroa" << endl;
    if (a1.tiliSiirto(100, a2)) {
        cout << "Siirto onnistui!" << endl;
    } else {
        cout << "Siirto epaonnistui!" << endl;
    }

    cout << endl << "Lopputilanne" << endl;
    a1.showSaldo();
    a2.showSaldo();
    cout << endl;

    return 0;
}
