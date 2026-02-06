#include "seuraaja.h"
#include <iostream>
using namespace std;


Seuraaja::Seuraaja() {
    cout<<"S konst"<<endl;
}

Seuraaja::Seuraaja(string aNimi) {
    cout<<"S param konst"<<endl;
    nimi=aNimi;

}

string Seuraaja::getNimi(){
    cout<<"getNimi"<<endl;
    return(nimi);
}

void Seuraaja::paivitys(string viesti){
    cout<<"paivitys"<<endl;
    cout<<"Viesti: "<<viesti<<endl;
}
