#include "Skill.h"
#include <iostream>

// FireSkill : les degats sont reduits par la resistance au feu de l'ennemi
// On tente un dynamic_cast pour savoir si la cible est un Ennemi
// C'est le seul endroit ou on verifie le type, pour appliquer la resistance
void FireSkill::utiliser(Personnage& cible) {
    int degats = 40;

    Ennemi* ennemi = dynamic_cast<Ennemi*>(&cible);
    if (ennemi != nullptr) {
        degats -= ennemi->getResistanceFeu();
    }

    std::cout << "FireSkill : inflige " << degats << " degats de feu !" << std::endl;
    cible.recevoirDegats(degats);
}

// IceSkill : degats fixes de glace
void IceSkill::utiliser(Personnage& cible) {
    int degats = 30;
    std::cout << "IceSkill : inflige " << degats << " degats de glace !" << std::endl;
    cible.recevoirDegats(degats);
}

// HealSkill : soigne la cible (degats negatifs = soin)
void HealSkill::utiliser(Personnage& cible) {
    int soin = -25; // valeur negative = soin dans recevoirDegats
    std::cout << "HealSkill : soigne de " << -soin << " HP !" << std::endl;
    cible.recevoirDegats(soin);
}
