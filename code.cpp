#include <iostream>
#include <limits>

int main() {
    double weight;
    std::cout << "Enter weight: ";
    while (!(std::cin >> weight)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid. Please enter a number: ";
    }

    int selection; 
    std::cout << "1 Mercury\n2 Venus\n3 Mars\n4 Jupiter\n5 Saturn\n6 Uranus\n7 Neptune\nEnter planet number: ";
    
    while (!(std::cin >> selection)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid. Enter a number (1-7): ";
    }

    double planet = 0; 

    switch (selection) {
        case 1: planet = 0.382; break; 
        case 2: planet = 0.913; break; 
        case 3: planet = 0.384; break; 
        case 4: planet = 2.345; break; 
        case 5: planet = 1.066; break; 
        case 6: planet = 0.927; break; 
        case 7: planet = 1.19;  break; 
        default: std::cout << "Invalid selection\n"; break;
    }

    std::cout << "Your relative weight is: " << (weight * planet) << std::endl;
    return 0;
}