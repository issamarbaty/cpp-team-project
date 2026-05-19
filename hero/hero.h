#ifndef HERO_H
#define HERO_H

#include "../personnage/Personnage.h"
#include "../inventory/Inventory.h"

class Hero : public Personnage {
private:
    int xp;
    int niveau;
public:
    Inventory inventaire;

    Hero() : Personnage(100, 20, 10, 15), xp(0), niveau(1) {
        inventaire.ajouterItem(new Potion());
        inventaire.ajouterItem(new Potion());
    }

    void gagnerXP(int quantite) {
        xp += quantite;
        std::cout << "+" << quantite << " XP ! (Total: " << xp << ")" << std::endl;
        if (xp >= niveau * 100) levelUp();
    }

    void levelUp() {
        niveau++;
        attaque += 5;
        defense += 3;
        hpMax += 20;
        hp = hpMax;
        std::cout << "LEVEL UP ! Niveau " << niveau << " !" << std::endl;
    }

    int getNiveau() { return niveau; }
    int getXP() { return xp; }
};

#endif