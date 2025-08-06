#include <vector>
#include "Warrior.hpp"
#include "Sorcerer.hpp"

using namespace std;

int main() {
    vector<Character*> characters;
    characters.push_back(new Warrior("Bob", 200, 15));
    characters.push_back(new Sorcerer("Linda", 100, 30));
    
    for (Character* ch : characters) {
        ch->attack();
        ch->displayInfo();
    }
    Character* characterPtr = new Warrior("Loise", 300, 30);
    Warrior* warriorPtr = dynamic_cast<Warrior*>(characters[0]);
    return 0;
}
