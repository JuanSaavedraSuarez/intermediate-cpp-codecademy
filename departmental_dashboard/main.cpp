#include <iostream>
#include "Marketing.hpp"
#include "Sales.hpp"

namespace audit = Marketing::Support;

int main() {
  std::vector<string> marketingMembers, salesMembers;
  
  Marketing::Team* marketingTeam 
    = new Marketing::Team("Stellar Corp", marketingMembers, 500000);
  marketingTeam->addMember("Scott");
  marketingTeam->addMember("Nicole");
  marketingTeam->addMember("Artem");

  Sales::Team* salesTeam 
    = new Sales::Team("Stellar Corp", salesMembers, "London");
  salesTeam->addMember("Patrik");
  salesTeam->addMember("Emily");
  salesTeam->addMember("Clive");

  string newLocation = "New York";
  salesTeam->printTeamDetails();
  salesTeam->setLocation(newLocation);
  salesTeam->printTeamDetails();
  
  audit::auditTeam(*marketingTeam);

  delete marketingTeam;
  delete salesTeam;

  return 0;
}
