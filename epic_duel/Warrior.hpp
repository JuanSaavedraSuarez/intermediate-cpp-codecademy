#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include "Character.hpp"

class Warrior : public Character {
public:
    Warrior(string warriorName, int warriorHealth, int warriorPower);
    void attack() override;
    void specialAttack();
};

#endif 
