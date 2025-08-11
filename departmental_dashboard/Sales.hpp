#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cout;

namespace Sales {
  class Team {
  private:
    string teamName;
    std::vector<string> teamMembers;
    string teamLocation;
  public:
    Team(string name, std::vector<string> members, string location) 
      : teamName { name }
      , teamMembers { members }
      , teamLocation { location }
      {}

    inline string getTeamName() const { return teamName ; }

    inline std::vector<string> getTeamMembers() { return teamMembers; }

    inline void addMember(string member) {
      teamMembers.push_back(member);
      return;
    }

    inline string getLocation() const { return teamLocation; }

    inline void setLocation(string& location) {
      teamLocation = location;
      return;
    }

    inline void printTeamDetails() {
      cout << "Sales Team Name: " << getTeamName()
        << "Location: " << getLocation() 
        << "Members: ";
      
      for (string member : teamMembers) {
        cout << member;
        if (member != teamMembers.back())
          cout << ", ";
        else
          cout << std::endl;
      }
    }
  };
}