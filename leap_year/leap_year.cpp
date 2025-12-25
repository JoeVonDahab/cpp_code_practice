#include <iostream>
#include <limits>

int main() {
  int year;
  std::cout << "PLease Enter the Year: \n";
  std::cin >> year;
  if (year % 4 != 0) {
    std::cout << "Not a Leap year";
  } else if (year % 100 == 0 && year % 400 != 0) {
    std::cout << "Not a Leap year";
  } else if (year % 400 == 0) {
    std::cout << "It's a leap year\n";
  }
// ... end of your code ...
  std::cout << "Press Enter to exit...";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer
  std::cin.get(); // Wait for one key press
  return 0;
}