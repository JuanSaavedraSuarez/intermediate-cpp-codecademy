#include <iostream>
#include <string>

template <typename T>
T midpoint(T a, T b) {
  return (a + ((b - 2)/2));
}

template <typename T>
void swapValues(T& a, T& b) {
  T temp = a;
  a = b;
  b = temp;
  return;
}