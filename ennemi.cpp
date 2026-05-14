#include "Ennemi.h"

Ennemi::Ennemi() : Personnage(80, 15, 5, 10), resistanceFeu(20) {}

int Ennemi::getResistanceFeu() {
    return resistanceFeu;
}