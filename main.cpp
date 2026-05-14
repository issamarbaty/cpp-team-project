#include <iostream>
#include "Hero.h"
#include "Ennemi.h"

using namespace std;

int main() {

    Hero h;
    Ennemi e;

    cout << "HP Ennemi avant attaque : " << e.getHp() << endl;

    h.attaquer(e);

    cout << "HP Ennemi apres attaque : " << e.getHp() << endl;

    return 0;
}