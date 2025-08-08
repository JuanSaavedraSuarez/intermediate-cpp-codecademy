#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Character.hpp"

class Sorcerer : public Character {
public:
  Sorcerer(string sorcererName, int sorcererHealth, int sorcererPower);
  void attack() override;
};

#endif 
