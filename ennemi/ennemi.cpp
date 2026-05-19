#include "Ennemi.h"

Ennemi::Ennemi() : Personnage(80, 15, 5, 10) {
    resistances["feu"] = new ResistanceFeu();
}

Ennemi::~Ennemi() {
    for (auto& pair : resistances) delete pair.second;
}

int Ennemi::appliquerResistance(int degats, std::string type) {
    if (resistances.count(type)) return resistances[type]->calculer(degats);
    return degats;
}