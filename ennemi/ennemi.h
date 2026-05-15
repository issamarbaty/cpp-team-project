#ifndef ENNEMI_H
#define ENNEMI_H

#include "Personnage.h"

class Ennemi : public Personnage {
private:
    int resistanceFeu;

public:
    Ennemi();
    int getResistanceFeu();
};

#endif