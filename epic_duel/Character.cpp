#include "Character.hpp"

Character::Character(string name, int health, int power) 
        : name {name}
        , health {health}
        , power {power}
        {}

void Character::attack() {
    cout << "Basic Low Attack" << endl;
    return;
}

void Character::displayInfo() {
    cout << "Name: " << name 
        << ", Health: " << health
        << ", Power: " << power
        << endl;
    return;
}