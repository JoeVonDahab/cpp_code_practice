#include <iostream>

int main() {
    int character = 0, choice1 = 0, choice2 = 0, choice3 = 0;

    std::cout << "--- GAME OF THRONES: THE IRON THRONE ---\n";
    while (character != 1 && character != 2) {
        std::cout << "Choose: 1) Daenerys  2) Jon Snow: ";
        std::cin >> character;
    }

    if (character == 1) {
        std::cout << "\nYou arrive at Dragonstone. Tyrion wants a blockade. Olenna wants fire.\n";
        while (choice1 < 1 || choice1 > 2) {
            std::cout << "1) Immediate Siege  2) Diplomacy: ";
            std::cin >> choice1;
        }

        if (choice1 == 1) { // Siege context
            std::cout << "\nThe siege lasts months. Cersei refuses safe passage. The city starves.\n";
            while (choice2 < 1 || choice2 > 2) {
                std::cout << "1) Storm the gates  2) Wait for Nobles to betray her: ";
                std::cin >> choice2;
            }

            if (choice2 == 1) { // NEW: Expanded Storming the Gates
                std::cout << "\nYou fly Drogon over the walls as your army rams the Mud Gate!\n";
                std::cout << "1) Fly directly to the Red Keep.\n2) Focus on destroying the Scorpion defenses.\n3) Burn the city to end it quickly.\n";
                std::cin >> choice3;

                if (choice3 == 1) {
                    std::cout << "\nEnding: It's a trap! Cersei ignites Wildfire beneath the Keep.\n";
                    std::cout << "The Red Keep collapses with everyone inside. No one wins the throne.\n";
                } else if (choice3 == 2) {
                    std::cout << "\nEnding: You clear the way safely. Cersei is captured and executed.\n";
                    std::cout << "You take the throne, but the common people fear you as a conqueror.\n";
                } else {
                    std::cout << "\nEnding: The 'Mad Queen' prophecy comes true. You win a city of ashes.\n";
                    std::cout << "Jon Snow leaves in disgust, and your reign begins in total isolation.\n";
                }
            } 
            else if (choice2 == 2) { // The Nobles/Jon Marriage path
                std::cout << "\nNobles open the gates! You take the Throne and marry Jon.\n";
                std::cout << "Later, the truth of his birth is revealed. Tension rises.\n";
                int choice4 = 0;
                while (choice4 < 1 || choice4 > 2) {
                    std::cout << "1) Kill Jon first  2) Try to rule together: ";
                    std::cin >> choice4;
                }
                
                if (choice4 == 2) std::cout << "\nEnding: Jon kills you to stop the madness. He rules as a Targaryen.\n";
                else std::cout << "\nEnding: You secure your reign in blood. The Dragon Queen rules alone.\n";
            }
        } else {
            std::cout << "\nCersei uses the time to build scorpions. The war is a stalemate.\n";
            std::cout << "The people demand a new leader. They choose Gendry Baratheon.\n";
            std::cout << "Ending: House Baratheon is restored. The Starks leave for the North.\n";
        }

    } else { // Jon Path
        std::cout << "\nThe Night King is coming. Dany wants you to bend the knee.\n";
        while (choice1 < 1 || choice1 > 2) {
            std::cout << "1) Go to Dragonstone  2) Focus on the Wall: ";
            std::cin >> choice1;
        }

        if (choice1 == 1) {
            std::cout << "\nDany agrees to help if you marry her. But Bran sends a raven about your father.\n";
            while (choice2 < 1 || choice2 > 2) {
                std::cout << "1) Reveal the truth  2) Keep it secret: ";
                std::cin >> choice2;
            }
            if (choice2 == 1) std::cout << "\nEnding: The alliance shatters. Both houses fall to the Dead.\n";
            else std::cout << "\nEnding: You win the Great War and rule as Aegon Targaryen.\n";
        } else {
            std::cout << "\nEnding: You hold the Wall, but die as the last Crow. Winter never ends.\n";
        }
        }
        return 0;
    }
