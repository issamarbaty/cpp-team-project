#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>

class Hero;
class Ennemi;

class Personnage {
protected:
    int hp;
    int hpMax;
    int attaque;
    int defense;
    int vitesse;

public:
    Personnage(int h, int a, int d, int v);

    virtual void attaquer(Personnage& cible);
    virtual int appliquerResistance(int degats, std::string type) { return degats; }

    void recevoirDegats(int degats);

    bool estVivant();

    int getHp();
    int getAttaque();
    int getDefense();
    int getVitesse();

    // Fonction amie : acces direct aux attributs proteges pour le combat
    friend void lancerCombat(Hero& hero, Ennemi& ennemi);
};

#endif