#include "functions.hpp"
#include "DataHolder.hpp"

using namespace std;

void runToolkitDemo() {
  string part1 = "chassis", part2 = "engine";
  DataHolder<double> specialNumber(2.71, 1.618, 9.8);
  DataHolder<string> robotName("Codey the Robot");

  cout << "Midpoint: " << midpoint(100, 200) << endl;

  swapValues(part1, part2);
  cout << "part1: " << part1 << " part2: " << part2 << endl;

  cout << "specialNumber: " << specialNumber.getValue() << endl;

  cout << "robot name: " << robotName.getValue() << endl;
}

int main() {
  int firstNumber = 5, secondNumber = 10;
  string greeting = "hello", planet = "world";
  DataHolder<int> testNumber(42, 0, 100);
  DataHolder<string> testString("robotics lab");

  cout << "Midpoint: " << midpoint(10, 20) << endl;
  cout << "Midpoint: " << midpoint(2.71, 3.14) << endl;

  cout << "Before swap First: " << firstNumber << " Second: " << secondNumber << endl;
  swapValues(firstNumber, secondNumber);
  cout << "After swap First: " <<  firstNumber << " Second: " << secondNumber << endl;
  
  cout << "Before swap First: " << greeting << " Second: " << planet << endl;
  swapValues(greeting, planet);
  cout << "After swap First: " <<  greeting << " Second: " << planet << endl;

  testNumber.setValue(75);
  testNumber.setValue(150);

  cout << testString.getValue() << endl;

  runToolkitDemo();
}