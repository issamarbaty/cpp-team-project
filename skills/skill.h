#ifndef SKILL_H
#define SKILL_H

#include "Personnage.h"
#include "Ennemi.h"

// Classe de base abstraite
class Skill {
public:
    virtual void utiliser(Personnage& cible) = 0;
};

// Inflige des degats reduits par la resistance au feu de l'ennemi
class FireSkill : public Skill {
public:
    void utiliser(Personnage& cible) override;
};

// Ralentit l'ennemi en reduisant sa vitesse
class IceSkill : public Skill {
public:
    void utiliser(Personnage& cible) override;
};

// Soigne la cible (hero ou ennemi)
class HealSkill : public Skill {
public:
    void utiliser(Personnage& cible) override;
};

#endif
