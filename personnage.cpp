#include <iostream>
#include "Personnage.h"

using namespace std;

Personnage::Personnage(int h, int a, int d, int v) {
    hp = h;
    attaque = a;
    defense = d;
    vitesse = v;
}

void Personnage::attaquer(Personnage& cible) {
    int degats = attaque - cible.defense;

    if (degats < 0) {
        degats = 0;
    }

    cible.recevoirDegats(degats);

    cout << "Attaque de " << degats << " degats !" << endl;
}

void Personnage::recevoirDegats(int degats) {
    hp -= degats;

    if (hp < 0) {
        hp = 0;
    }
}

bool Personnage::estVivant() {
    return hp > 0;
}

int Personnage::getHp() {
    return hp;
}

int Personnage::getAttaque() {
    return attaque;
}

int Personnage::getDefense() {
    return defense;
}

int Personnage::getVitesse() {
    return vitesse;
}