#include <iostream>
#include "hero/Hero.h"
#include "ennemi/Ennemi.h"
#include "combat/Combat.h"
#include "skills/Skill.h"

using namespace std;

void afficherMenu() {
    cout << "\nQue voulez-vous faire ?" << endl;
    cout << "1. Attaquer" << endl;
    cout << "2. Utiliser Skill" << endl;
    cout << "3. Utiliser Potion" << endl;
    cout << "Choix : ";
}

int main() {
    Hero hero;
    int choix;

    cout << "=== JEU DE COMBAT RPG ===" << endl;

    while (true) {
        Ennemi ennemi;
        cout << "\n=== NOUVEL ENNEMI APPARAIT ===" << endl;

        while (hero.estVivant() && ennemi.estVivant()) {
            cout << "\nHero HP: " << hero.getHp()
                 << " | Niveau: " << hero.getNiveau()
                 << " | Ennemi HP: " << ennemi.getHp() << endl;

            afficherMenu();
            cin >> choix;

            if (choix == 1) {
                hero.attaquer(ennemi);
            } else if (choix == 2) {
                FireSkill fs;
                fs.utiliser(ennemi);
            } else if (choix == 3) {
                if (hero.inventaire.taille() > 0) {
                    hero.inventaire.utiliserItem(0, hero);
                } else {
                    cout << "Inventaire vide !" << endl;
                }
            }

            if (ennemi.estVivant())
                ennemi.attaquer(hero);
        }

        if (!hero.estVivant()) {
            cout << "\nGame Over !" << endl;
            break;
        }

        hero.gagnerXP(80);
        cout << "\nEnnemi vaincu ! Continuez ? (1=Oui / 0=Non) : ";
        cin >> choix;
        if (choix == 0) break;
    }

    return 0;
}