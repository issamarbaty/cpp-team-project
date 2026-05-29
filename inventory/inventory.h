#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"
#include <vector>
#include <iostream>

class Inventory {
private:
    std::vector<Item*> sac;
public:
    void ajouterItem(Item* item) { sac.push_back(item); }

    void utiliserItem(int index, Personnage& cible) {
        if (index >= 0 && index < sac.size()) {
            sac[index]->utiliser(cible);
            delete sac[index];
            sac.erase(sac.begin() + index);
        } else {
            std::cout << "Item invalide !" << std::endl;
        }
    }

    void afficherInventaire() {
        if (sac.empty()) { std::cout << "Inventaire vide." << std::endl; return; }
        for (int i = 0; i < sac.size(); i++)
            std::cout << i << ". " << sac[i]->getNom() << std::endl;
    }

    int taille() { return sac.size(); }

    ~Inventory() { for (auto item : sac) delete item; }
};

#endif