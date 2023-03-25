#include "Water.h"
#include <iostream>

int main()
{
    // Create some objects of each class
    Ocean o1("Pacific", "North/South America, Asia", 35800, 168723000);
    Ocean o2;
    std::cout << "Enter data for ocean:\n";
    std::cin >> o2;

    Sea s1("Mediterranean", "Europe, Africa, Asia", 512, 2500000, "Enclosed", true);
    Sea s2;
    std::cout << "\nEnter data for sea:\n";
    std::cin >> s2;

    Bay b1("Chesapeake Bay", "USA", 8, 11646, "United States", "Washington, D.C.");
    Bay b2;
    std::cout << "\nEnter data for bay:\n";
    std::cin >> b2;

    // Print the objects using overloaded << operator
    std::cout << "\nPrinting objects:\n\n";
    std::cout << o1 << std::endl;
    std::cout << o2 << std::endl;
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;

    return 0;
}
