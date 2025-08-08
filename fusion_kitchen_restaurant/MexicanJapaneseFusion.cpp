#include "MexicanJapaneseFusion.hpp"
#include <iostream>

MexicanJapaneseFusion::MexicanJapaneseFusion(string name, string addr, int spiceLvl, bool tatamiAvailable) 
  : MexicanRestaurant(name, addr, spiceLvl)
  , JapaneseRestaurant(name, addr, tatamiAvailable)
  , Restaurant(name, addr)
  {}

void MexicanJapaneseFusion::describeCuisine() {
  cout << "A unique fusion of Mexican and Japanese cuisines" << endl;
}

void MexicanJapaneseFusion::displaySpecialty() {
  cout << "Our specialties combine both cuisines - try our Sushi Tacos and Wasabi Guacamole!"
    << endl;
}