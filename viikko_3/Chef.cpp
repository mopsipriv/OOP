#include <iostream>
#include "Chef.h"

using namespace std;

Chef::Chef(string cN){

    chefName=cN;
    cout<<"Chef"<<" "<<chefName<<" "<<"konstruktori"<<endl;
}

ItalianChef::ItalianChef(string name):Chef(name){
    cout<<"Italian Chef"<<" "<<chefName<<" "<<"konstruktori"<<endl;

}

string Chef::getName(){
    return chefName;
}

int Chef::makeSalad(int numberOfItems){

    cout<<"Chef"<<" "<<chefName<<" "<<"with"<<" "<<numberOfItems<<" "<<"items can make salad"<<" "<<numberOfItems/5<<" "<<"portions"<<endl;
    return numberOfItems/5;
}

int Chef::makeSoup(int numberOfItems){
    cout<<"Chef"<<" "<<chefName<<" "<<"with"<<" "<<numberOfItems<<" "<<"items can make soup"<<" "<<numberOfItems/3<<" "<<"portions"<<endl;
    return numberOfItems/3;
}

bool ItalianChef::askSecret(string secret,int flo,int wat){
    if(secret.compare(password)==0){
        cout<<"Password ok!"<<endl;
        flour=flo;
        water=wat;
        makepizza();
        return true;
    }
    else{
        cout<<"Access denide"<<endl;
        return false;
    }

}

int ItalianChef::makepizza(){
    int numberOfFlour=flour/5;
    int numberOfWater=water/5;
    int numberOfPizzas=min(numberOfFlour,numberOfWater);
    cout<<"ItalianChef with"<<" "<<chefName<<" "<<" "<<flour<<" "<<"flour and"<<" "<<water<<" "<<"water"<<" "<<"can make"<<" "<<numberOfPizzas<<" "<<"pizzas"<<endl;
    return numberOfPizzas;

}
Chef::~Chef(){
    cout<<"Chef" <<" "<< chefName<<" " <<  "destruktori"<<endl;
}

ItalianChef::~ItalianChef(){
    cout<<"Italian Chef"<<" " << chefName<<" "<<"destruktori"<<endl;
}
