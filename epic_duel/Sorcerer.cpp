#include "Sorcerer.hpp"

Sorcerer::Sorcerer(string sorcererName, int sorcererHealth, int sorcererPower)
    : Character(sorcererName, sorcererHealth, sorcererPower)
    {}

void Sorcerer::attack() {
    cout << "Casts a spell!" << endl;
    return;
}