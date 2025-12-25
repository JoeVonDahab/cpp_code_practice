#include <iostream>
# include <limits>
int main() {
  double pesos; 
  double reais; 
  double soles; 
  double dollars; 

  std::cout << "Enter number of Colombian reais: \n";
  std::cin >> reais;
  std::cout << "Enter number of Colombian Pesos: \n";
  std::cin >> pesos;
  std::cout << "Enter number of Colombian soles: \n";
  std::cin >> soles;

  dollars = (0.056 * pesos) + (0.18  * reais) + (0.30 * soles);
  std::cout << "US Dollars = $ " << dollars;
// ... end of your code ...
  std::cout << "Press Enter to exit...";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer
  std::cin.get(); // Wait for one key press
  return 0;
  
}