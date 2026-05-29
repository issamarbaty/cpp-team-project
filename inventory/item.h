#ifndef ITEM_H
#define ITEM_H

#include "../personnage/Personnage.h"
#include <string>
#include <iostream>

class Item {
protected:
    std::string nom;
public:
    Item(std::string n) : nom(n) {}
    virtual void utiliser(Personnage& cible) = 0;
    std::string getNom() { return nom; }
    virtual ~Item() {}
};

class Potion : public Item {
public:
    Potion() : Item("Potion de soin") {}
    void utiliser(Personnage& cible) override {
        int soin = -30;
        std::cout << "Potion : soigne de " << -soin << " HP !" << std::endl;
        cible.recevoirDegats(soin);
    }
};

#endif 
