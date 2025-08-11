#include <iostream>

using std::cout;
using std::endl;
using std::string;

template <typename T>
class DataHolder {
private:
  T storedValue;
  T minValue;
  T maxValue;

public:
  DataHolder(T val, T min, T max) 
  : minValue { min }
  , maxValue { max }
  {
    cout << "Set min to: " << min << " max to: " << max << endl;
    if (val >= min && val <= max) {
      storedValue = val;
      cout << "Set val to: " << val << endl;
    }
    else if ( val > max) {
      storedValue = max;
      cout << "WARNING: val is too high! Setting value to max!" << endl;
    }
    else if ( val < min) {
      storedValue = min;
      cout << "WARNING: val is too low! Setting value to min!" << endl;
    }
  }

  void setValue(T newValue) {
    cout << "min = " << minValue << " max = " << maxValue << endl;
    if (newValue >= minValue && newValue <= maxValue) {
      storedValue = newValue;
      cout << "Set val to: " << newValue << endl;
    }
    else if ( newValue > maxValue) {
      storedValue = maxValue;
      cout << "WARNING: val too high! Setting value to max!" << endl;
    }
    else if ( newValue < minValue) {
      storedValue = minValue;
      cout << "WARNING: val is too low! Setting value to min!" << endl;
    }
  }

  inline T getValue() const { return storedValue; }
};

template <>
class DataHolder<std::string> {
private:
  string storedValue;
public:
  DataHolder(string val)
    : storedValue { val }
    {}
  
  void setValue(string newString) {
    storedValue = newString;
    return;
  }

  string getValue() const { return storedValue; }
};