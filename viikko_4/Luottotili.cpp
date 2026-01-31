#include "Luottotili.h"
#include <iostream>
using namespace std;

Luottotili::Luottotili(){
    cout<<"Olen Luottotili: defaultkonstruktorissa"<<endl;
}

Luottotili::Luottotili(string om,double lr):Pankkitili(om){
    cout<<"Olen luottotili: parametrikonstruktorissa"<<endl;
    luottoRaja=lr;
}

bool Luottotili::deposit(double sum){
    cout<<"Olen Luottotili: velanmaksussa!"<<endl;
    cout<<"Saldo ennen: "<<saldo<<endl;
    cout<<"Saldo jälkeen: "<<sum+saldo<<endl;
    if((sum<0) || ((sum+saldo)>0)) return false;
    saldo+=sum;
    return true;
}

bool Luottotili::withdraw(double sum){
    cout<<"Olen Luottotili: velannostossa!"<<endl;
    cout<<"Luottoraja: "<<luottoRaja<<endl;
    cout<<"Saldo ennen: "<<saldo<<endl;
    cout<<"Saldo jälkeen: "<<saldo-sum<<endl;
    if((sum<0)|| ((std::abs(saldo)+sum)>luottoRaja)) return false;
    saldo-=sum;
    return true;
}
