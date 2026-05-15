#ifndef ENNEMI_H
#define ENNEMI_H

#include "Personnage.h"
#include <string>
#include <map>

class Resistance {
public:
    virtual int calculer(int degats) = 0;
    virtual ~Resistance() {}
};

class ResistanceFeu : public Resistance {
public:
    int calculer(int degats) override { return degats - 20; }
};

class Ennemi : public Personnage {
private:
    std::map<std::string, Resistance*> resistances;

public:
    Ennemi();
    ~Ennemi();
    int appliquerResistance(int degats, std::string type) override;
};

#endif