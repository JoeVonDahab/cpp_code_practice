#include <iostream>
#include <cmath>
#include <limits>
int main() {
  
  double a;
  double b;
  double c; 
  std::cout << "Enter a: \n";
  std::cin >> a;
  std::cout << "Enter b: \n";
  std::cin >> b;
  std::cout << "Enter c: \n";
  std::cin >> c;

  double root1;
  double root2;

  root1 = (-b + std::sqrt(b * b - 4 * a * c)) / (2 * a);
  root2 = (-b - std::sqrt(b * b - 4 * a * c)) / (2 * a);
  
  std::cout << "root1: " << root1 << " root2: " << root2; 
// ... end of your code ...
  std::cout << "Press Enter to exit...";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer
  std::cin.get(); // Wait for one key press
  return 0;
}