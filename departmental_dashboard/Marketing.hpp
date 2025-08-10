#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;

namespace Marketing {
  class Team {
  private:
    string teamName;
    std::vector<string> teamMembers;
    double teamBudget;
  public:
    Team(string name, std::vector<string> members, int budget)
      : teamName { name }
      , teamMembers { members }
      , teamBudget { (double)budget }
      {}
    
    inline string getName() { return teamName; } 

    inline void addMember(string member) {
      teamMembers.push_back(member);
      return;
    }

    inline int getMemberCount() { return teamMembers.size(); }
    
    inline double getBudget() { return teamBudget; }

    inline void setBudget(double newBudget) { 
      teamBudget = newBudget;
      return;
    }
  };

  namespace Support {
    inline void auditTeam(Team& team) {
      cout << "Auditing Marketing Team: " << team.getName() 
        << "Number of Members: " << team.getMemberCount()
        << "Team Budget: " << team.getBudget()
        << "Audit complete!" << std::endl;
    }
  }
}