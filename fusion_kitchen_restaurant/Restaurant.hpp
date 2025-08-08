#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP

#include <string>
#include <vector>
#include "MenuItem.hpp"
using namespace std;

class Restaurant {
private:
  string name;
  string address;

protected:
  vector<MenuItem> menu;

public:
  Restaurant(string name, string addr);
  void displayInfo();
  void describeCuisine();
  void addMenuItem(string name, double price);
  void displayMenu(); 
};

#endif
