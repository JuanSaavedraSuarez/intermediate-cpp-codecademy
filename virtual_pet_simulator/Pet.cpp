#include "Pet.hpp"
#include <iostream>
using namespace std;

void Pet::setName(string newName) {
  name = newName;
  return;
}

void Pet::setAge(int newAge) {
  age = newAge;
  return;
}

void Pet::eat() {
  cout << "AnimalName is eating!" << endl;
  return;
}