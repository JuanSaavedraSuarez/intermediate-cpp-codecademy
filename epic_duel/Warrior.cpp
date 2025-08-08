#include "Warrior.hpp"

Warrior::Warrior(string warriorName, int warriorHealth, int warriorPower)
  : Character(warriorName, warriorHealth, warriorPower)
  {}

void Warrior::attack() {
  cout << "Swings a mighty sword!" << endl;
  return;
}

void Warrior::specialAttack() {
  cout << getName() << " a devastating double strike!" << endl;
  return;
}