#include "JapaneseRestaurant.hpp"
#include <iostream>

JapaneseRestaurant::JapaneseRestaurant(string name, string addr, bool tatamiAvailable)
  : Restaurant(name, addr)
  , hasTatami {tatamiAvailable}
  {}

void JapaneseRestaurant::describeCuisine() {
  cout << "Traditional Japanese cuisine " 
    << (hasTatami ? "with tatami seating available"
    : "") << endl; 
  return;
}