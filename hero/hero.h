#ifndef HERO_H
#define HERO_H

#include "../personnage/Personnage.h"
#include "../inventory/Inventory.h"

class Hero : public Personnage {
private:
    int niveau;
    int xp;

public:
    Hero();

    int getNiveau() const;
    void gagnerXP(int quantite);

    Inventory inventaire;
};

#endif