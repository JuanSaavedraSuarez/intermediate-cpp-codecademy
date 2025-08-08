#include <iostream>
#include "FlightBooking.hpp"
using namespace std;

int main() {
  // Creating an instance of FlightBooking class
  FlightBooking booking1("FlightA", "John Doe");
  FlightBooking booking2("FlightB", "Jane Smith");

  booking1.bookFlight();
  booking2.bookFlight();

  booking1.showFlightDetails();
  booking2.showFlightDetails();

  // Show total bookings
  FlightBooking::showTotalBookings();

  // Demonstrating cancellation and use of const function
  booking1.cancelFlight();
  booking2.cancelFlight();

  // Demonstrating auto keyword
  booking1.demonstrateAuto();

  return 0;
}
