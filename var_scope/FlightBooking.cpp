#include "FlightBooking.hpp"

int FlightBooking::availableSeats = 100;
int FlightBooking::totalBookings = 0;

FlightBooking::FlightBooking(string flightName, string passengerName)
  : bookingID(0), flightName(flightName), passengerName(passengerName) {}

void FlightBooking::bookFlight() {
  if (availableSeats > 0) {
    bookingID = ++totalBookings;
    availableSeats--;  // Reduce available seats
    cout << "Flight booked for " << passengerName << " on " << flightName << endl;
    cout << "Booking ID: " << bookingID << endl;
  } else {
    cout << "No seats available!" << endl;
  }
}

void FlightBooking::cancelFlight() const {
  if (bookingID != 0) {
    cout << "Flight booking cancelled for " << passengerName << endl;
    cout << "Booking ID: " << bookingID << endl;
  } else {
    cout << "No booking to cancel!" << endl;
  }
}

void FlightBooking::showFlightDetails() const {
  cout << "Passenger: " << passengerName << endl;
  cout << "Flight: " << flightName << endl;
  cout << "Booking ID: " << bookingID << endl;
}

void FlightBooking::demonstrateAuto() const {
  auto flightInfo = "Flight: " + flightName + " for " + passengerName;
  cout << "Auto-deduced variable: " << flightInfo << endl;
}

void FlightBooking::showTotalBookings() {
  cout << "Total Bookings: " << totalBookings << endl;
}
