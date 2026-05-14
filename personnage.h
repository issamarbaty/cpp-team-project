#ifndef PERSONNAGE_H
#define PERSONNAGE_H

class Personnage {
protected:
    int hp;
    int attaque;
    int defense;
    int vitesse;

public:
    Personnage(int h, int a, int d, int v);

    virtual void attaquer(Personnage& cible);

    void recevoirDegats(int degats);

    bool estVivant();

    int getHp();
    int getAttaque();
    int getDefense();
    int getVitesse();
};

#endif