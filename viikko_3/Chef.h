#ifndef CHEF_H
#define CHEF_H

#include <iostream>
#include <string>

class Chef {
protected:
    std::string chefName;

public:
    Chef(std::string);
    ~Chef();
    std::string getName();
    int makeSalad(int);
    int makeSoup(int);
};

class ItalianChef : public Chef {
private:
    std::string password = "pizza";
    int flour;
    int water;
    int makepizza();

public:
    ItalianChef(std::string);
    ~ItalianChef();
    bool askSecret(std::string, int, int);
};

#endif //CHEF_H
