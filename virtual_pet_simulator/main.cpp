#include "Pet.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "MagicPet.hpp"
#include <iostream>
#include <vector>
#include <memory> // for smart pointers
using namespace std;

int main() {
  Dog* myDog = new Dog();
  Cat* myCat = new Cat();

  myDog->setName("Santa's Little Helper");
  myDog->setAge(5);

  myCat->setName("Snowball III");
  myCat->setAge(3);

  vector<Pet*> pets;
  pets.push_back(myDog);
  pets.push_back(myCat);

  for (Pet* pet : pets) {
    pet->makeSound();
  }

  MagicPet* myMagicPet = new MagicPet();

  myMagicPet->setName("Jake");
  myMagicPet->setAge(100);

  pets.push_back(myMagicPet);

  for (Pet* pet : pets) {
    MagicPet* mPet = dynamic_cast<MagicPet*>(pet);
    if (mPet) {
      mPet->doTrick();
    }
  }

  return 0;
}
