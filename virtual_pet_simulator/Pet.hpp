#ifndef PET_HPP
#define PET_HPP

#include <string>
using namespace std;

class Pet {
private:
  string name;
  int age;

public:
  inline string getName() { return name; }
  inline int getAge() { return age; }
  void setName(string newName);
  void setAge(int newAge);
  void eat();
  virtual void makeSound() = 0;
};

#endif
