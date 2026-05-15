#include <iostream>
#include "Combat.h"

using namespace std;

void lancerCombat(Hero& hero, Ennemi& ennemi) {
    cout << "=== DEBUT DU COMBAT ===" << endl;

    int tour = 1;

    while (hero.estVivant() && ennemi.estVivant()) {
        cout << "\n--- Tour " << tour << " ---" << endl;
        cout << "Hero HP: " << hero.hp << "  |  Ennemi HP: " << ennemi.hp << endl;

        // Le personnage avec la plus grande vitesse attaque en premier
        if (hero.vitesse >= ennemi.vitesse) {
            hero.attaquer(ennemi);
            if (ennemi.estVivant())
                ennemi.attaquer(hero);
        } else {
            ennemi.attaquer(hero);
            if (hero.estVivant())
                hero.attaquer(ennemi);
        }

        tour++;
    }

    cout << "\n=== FIN DU COMBAT ===" << endl;

    if (hero.estVivant())
        cout << "Le Hero a gagne !" << endl;
    else
        cout << "L'Ennemi a gagne !" << endl;
}
