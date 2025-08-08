#include "Restaurant.hpp"
#include <iostream>
#include <regex>

Restaurant::Restaurant(string name, string addr) 
  : name { name }
  , address { addr }
  {}

void Restaurant::displayInfo() {
  cout << "Restaurant name: " << name << endl;
  cout << "Restaurant address: " << address << endl;
}

void Restaurant::describeCuisine() {
  cout << "This restaurant serves various types of cuisines." << endl;
}

void Restaurant::addMenuItem(string name, double price) {
  menu.push_back(MenuItem(name, price));
  return;
}

void Restaurant::displayMenu() {
  if (menu.empty())
    return;

  cout << name << "'s Menu: " << endl;
  for (MenuItem item : menu) {
    item.display();
  }
  return;
}