#include <iostream>
#include "Hero.h"
#include "Ennemi.h"
#include "Combat.h"

using namespace std;

int main() {
    Hero hero;
    Ennemi ennemi;

    lancerCombat(hero, ennemi);

    return 0;
}
