#include <iostream>
#include "MexicanRestaurant.hpp"
#include "JapaneseRestaurant.hpp"
#include "MexicanJapaneseFusion.hpp"

using namespace std;

int main() {
  cout << "Testing Restaurant Inheritance Hierarchy:" << endl;

  MexicanRestaurant laCasa("La Casa", "123 Spice Lane", 4);
  JapaneseRestaurant sakura("Sakura", "456 Sushi Road", true);
  MexicanJapaneseFusion fusionFiesta("Fusion Fiesta", "789 Fusion Ave", 4, true);

  laCasa.displayInfo();
  laCasa.describeCuisine();
  cout << endl;

  sakura.displayInfo();
  sakura.describeCuisine();
  cout << endl;

  fusionFiesta.displayInfo();
  fusionFiesta.describeCuisine();
  fusionFiesta.displaySpecialty();
  cout << endl;

  laCasa.addMenuItem("Tacos", 8.99);
  laCasa.addMenuItem("Enchiladas", 12.99);

  sakura.addMenuItem("Sushi Roll", 14.99);
  sakura.addMenuItem("Ramen", 11.99);

  fusionFiesta.addMenuItem("Sushi Tacos", 15.99);
  fusionFiesta.addMenuItem("Wasabi Guacamole", 7.99);

  laCasa.displayMenu();
  cout << endl;

  sakura.displayMenu();
  cout << endl;

  fusionFiesta.displayMenu();
  cout << endl;

  return 0;
}
