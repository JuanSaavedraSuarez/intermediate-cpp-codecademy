#include "MenuItem.hpp"
#include <iomanip>
#include <ios>
#include <iostream>

MenuItem::MenuItem(string name, double price) 
  : name {name}
  , price {price}
  {}

void MenuItem::display() {
  cout << name << " - " << "$" 
    << fixed << setprecision(2) << price << endl;
  return;
}