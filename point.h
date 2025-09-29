// *************************************************************************** 
// 
//   Your Name 
//   Your Harper ID
//   Your Course and Section Number 
// 
//   I certify that this is my own work and where appropriate an extension 
//   of the starter code provided for the assignment. 
// ***************************************************************************

#ifndef POINT_CLASS_HEADER_INCLUDED
#define POINT_CLASS_HEADER_INCLUDED

#include <iostream>

class Point {
private:
    double x, y;

public:
    // Constructors
    Point();                              // Default constructor
    Point(double new_x, double new_y);    // Param constructor
    Point(const Point& other);            // Copy constructor

    // Assignment operator
    Point& operator=(const Point& other);

    // Operator overloads
    friend std::istream& operator>>(std::istream& in, Point& p);
    friend std::ostream& operator<<(std::ostream& out, const Point& p);
    
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;
    
    double operator-(const Point& other) const;   // Distance
    Point operator/(const Point& other) const;    // Midpoint

    // Accessors
    double get_x() const { return x; }
    double get_y() const { return y; }

    // Mutators
    void set_x(double new_x);
    void set_y(double new_y);

    // Utility functions
    Point flip_x() const;
    Point flip_y() const;
    Point shift_x(double move_by) const;
    Point shift_y(double move_by) const;
};

#endif
