#include <iostream>
#include <string>
using namespace std;

class FlightBooking {
private:
  mutable int bookingID;
  static int totalBookings;
  static int availableSeats;

  string flightName;
  string passengerName;

public:
  FlightBooking(string flightName, string passengerName);
  void bookFlight();
  void cancelFlight() const;
  void showFlightDetails() const;
  void demonstrateAuto() const;
  static void showTotalBookings();
};