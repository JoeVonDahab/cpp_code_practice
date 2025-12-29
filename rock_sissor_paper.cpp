#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <limits>
int main() {
  
  // Live long and prosper
srand (time(NULL));
  
int computer = rand() % 3 + 1;

int user = 0;
std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) Rock \n";
std::cout << "2) Paper \n";
std::cout << "3) Scissors \n";

std::cout << "shoot! ";
std::cin >> user;
if (user == computer) {
        std::cout << "It's a tie!\n";
    } 
    else if ((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2)) {
        std::cout << "You won!\n";
    } 
    else {
        std::cout << "The computer won!\n";
    }

// ... end of your code ...
  std::cout << "Press Enter to exit...";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer
  std::cin.get(); // Wait for one key press
  return 0;
}