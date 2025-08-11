#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>

using namespace std;

class Character {
private:
  string name;
  int health;
  int power;
public:
  Character(string name = "Elden King", int health = 100, int power = 10);    
  virtual void attack();
  virtual void displayInfo();
  
  inline string getName() const { return name; }
  inline int getHealth() const { return health; }
  inline int getPower() const {return power; }
};

#endif 