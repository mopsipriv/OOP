#include "asiakas.h"
#include "Luottotili.h"
#include <iostream>


Asiakas::Asiakas() {
    cout<<"Asiakas: Olen defaultkonstruktorissa"<<endl;
}

Asiakas::Asiakas(string name,double lr):kayttotili(name),luottotili(name,lr){
    nimi=name;
    cout<<"Asiakas: Olen parametrikostruktorissa"<<endl;
}

bool Asiakas::tiliSiirto(double sum, Asiakas& kohde){
    if(sum<0)return false;

    if(kayttotili.withdraw(sum)){
        kohde.talletus(sum);
        return true;
    }
    return false;
}

string Asiakas::getNimi(){
    return nimi;
}

void Asiakas::showSaldo(){
    cout << "Asiakas: " << nimi << endl;
    cout<<"Käyttötilin saldo: "<<kayttotili.getBalance()<<endl;
    cout<<"Luottotilin saldo: "<<luottotili.getBalance()<<endl;
}

bool Asiakas::talletus(double sum){
    return kayttotili.deposit(sum);

}
bool Asiakas::nosto(double sum){
    return kayttotili.withdraw(sum);


}
bool Asiakas::luotonMaksu(double sum){
    return luottotili.deposit(sum);
}

bool Asiakas::luotonNosto(double sum){
    return luottotili.withdraw(sum);
}

