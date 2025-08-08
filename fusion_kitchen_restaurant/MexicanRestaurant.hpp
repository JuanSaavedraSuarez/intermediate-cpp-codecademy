#ifndef MEXICAN_RESTAURANT_HPP
#define MEXICAN_RESTAURANT_HPP

#include "Restaurant.hpp"

class MexicanRestaurant : virtual public Restaurant {
private:
  int spiceLevel;
    
public:
  MexicanRestaurant(string name, string addr, int spiceLvl);
  void describeCuisine();
};

#endif