// *************************************************************************** 
// 
//   Your Name 
//   Your Harper ID
//   Your Course and Section Number 
// 
//   I certify that this is my own work and where appropriate an extension 
//   of the starter code provided for the assignment. 
// ***************************************************************************

#include <iostream>
#include "point.h"

int main() {
    Point p1, p2;

    // Input using overloaded >>
    std::cout << "Enter point 1 in format (x, y): ";
    std::cin >> p1;

    std::cout << "Enter point 2 in format (x, y): ";
    std::cin >> p2;

    std::cout << "\n--- Points Entered ---\n";
    std::cout << "Point 1: " << p1 << std::endl;
    std::cout << "Point 2: " << p2 << std::endl;

    // Equality and Inequality
    std::cout << "\n--- Equality/Inequality ---\n";
    std::cout << "p1 == p2: " << (p1 == p2 ? "True" : "False") << std::endl;
    std::cout << "p1 != p2: " << (p1 != p2 ? "True" : "False") << std::endl;

    // Distance using operator-
    std::cout << "\n--- Distance ---\n";
    std::cout << "Distance between p1 and p2: " << (p1 - p2) << std::endl;

    // Midpoint using operator/
    std::cout << "\n--- Midpoint ---\n";
    Point midpoint = p1 / p2;
    std::cout << "Midpoint: " << midpoint << std::endl;

    // Assignment operator
    std::cout << "\n--- Assignment ---\n";
    Point p3 = p1;  // Copy constructor
    std::cout << "p3 (copy of p1): " << p3 << std::endl;

    p3 = p2;  // Assignment operator
    std::cout << "p3 after assignment from p2: " << p3 << std::endl;

    // Flip and Shift tests
    std::cout << "\n--- Flip and Shift ---\n";
    std::cout << "p1 flipped over X: " << p1.flip_x() << std::endl;
    std::cout << "p1 flipped over Y: " << p1.flip_y() << std::endl;
    std::cout << "p1 shifted +2 in X: " << p1.shift_x(2.0) << std::endl;
    std::cout << "p1 shifted -3 in Y: " << p1.shift_y(-3.0) << std::endl;

    return 0;
}
