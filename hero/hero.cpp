#include "Hero.h"
#include <iostream>
using namespace std;

Hero::Hero() : Personnage(100, 20, 10, 15), niveau(1), xp(0) {
    inventaire.ajouterItem(new Potion());
    inventaire.ajouterItem(new Potion());
}

int Hero::getNiveau() const {
    return niveau;
}

void Hero::gagnerXP(int quantite) {
    xp += quantite;
    cout << "Vous gagnez " << quantite << " XP !" << endl;
    if (xp >= 100) {
        xp -= 100;
        niveau++;
        cout << "LEVEL UP ! Niveau " << niveau << " !" << endl;
    }
}