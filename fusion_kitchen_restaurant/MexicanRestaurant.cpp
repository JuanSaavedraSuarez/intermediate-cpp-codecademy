#include "MexicanRestaurant.hpp"
#include <iostream>

MexicanRestaurant::MexicanRestaurant(string name, string addr, int spiceLvl)
  : Restaurant(name, addr)
  , spiceLevel {spiceLvl}
  {}

void MexicanRestaurant::describeCuisine() {
  cout << "Authentic Mexican cuisine with spice level "
    << spiceLevel << " out of 5" << endl;
}