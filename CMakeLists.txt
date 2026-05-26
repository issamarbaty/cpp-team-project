cmake_minimum_required(VERSION 3.10)
project(JeuCombatRPG)

set(CMAKE_CXX_STANDARD 17)

include_directories(
    personnage
    hero
    ennemi
    combat
    skills
    inventory
)

add_executable(jeu
    main.cpp
    personnage/personnage.cpp
    hero/hero.cpp
    ennemi/ennemi.cpp
    combat/Combat.cpp
    skills/skill.cpp
)