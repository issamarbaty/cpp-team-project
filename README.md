# Jeu de Combat RPG — Console C++

Projet universitaire de développement d'un jeu de combat au tour par tour en mode console,
opposant un héros contrôlé par le joueur à des ennemis générés aléatoirement.

## Équipe

| Nom complet | Contribution |
|-------------|-------------|
| Aabir Kenzi | Personnages & Classes |
| Issam Arbaty | Combat system |
| Mohcine Amrhourh | Skills & Polymorphisme |
| Ghizlane Ait M'hend | Inventory & XP & UI |

## Fonctionnalités

- **Création du héros** : choix du nom et de la classe (Guerrier, Mage, Archer)
- **Statistiques** : points de vie, attaque, défense, vitesse
- **Compétences** : skills spécifiques selon la classe du héros
- **Combat tour par tour** : calcul des dégâts, gestion de la mort
- **Expérience & évolution** : système de montée en niveau
- **Inventaire** : gestion d'objets consommables

### Challenge avancé
Système de magie basé sur les résistances des ennemis via **polymorphisme dynamique**,
sans recours à des structures conditionnelles (`if` / `switch`) sur le type des objets.

## Structure du projet

```
cpp-team-project/
├── main.cpp               # Point d'entrée du programme
├── CMakeLists.txt         # Configuration de compilation CMake
├── personnage/
│   ├── personnage.cpp     # Classe de base des personnages
│   └── personnage.h
├── hero/
│   ├── hero.cpp           # Classe héros — stats, évolution, XP
│   └── hero.h
├── skills/
│   ├── Skill.cpp          # Compétences & polymorphisme dynamique
│   └── Skill.h
├── ennemi/
│   ├── ennemi.cpp         # Ennemis générés aléatoirement
│   └── ennemi.h
├── combat/
│   ├── Combat.cpp         # Système de combat au tour par tour
│   └── Combat.h
├── inventory/
│   ├── Item.h             # Classe de base des objets
│   └── Inventory.h        # Gestion de l'inventaire
└── README.md
```

## Compilation

```bash
g++ -o jeu main.cpp personnage/personnage.cpp hero/hero.cpp ennemi/ennemi.cpp combat/Combat.cpp skills/skill.cpp -std=c++17
```

## Lancement

```bash
# Linux / Mac
./jeu

# Windows (MinGW)
jeu.exe
```

## Concepts C++ utilisés

- Classes & héritage
- Polymorphisme dynamique (`virtual`, pointeurs de base)
- Encapsulation & accesseurs
- Génération aléatoire (`rand`, `srand`)
- Gestion mémoire dynamique
