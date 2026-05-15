#include "Skill.h"
#include <iostream>

// FireSkill : les degats sont reduits par la resistance au feu via polymorphisme
void FireSkill::utiliser(Personnage& cible) {
    int degats = 40;
    degats = cible.appliquerResistance(degats, "feu");
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
