#include "point.h"
#include <iostream>
#include <cmath>

// Default constructor
Point::Point() : x(0.0), y(0.0) {}

// Parameterized constructor
Point::Point(double new_x, double new_y) {
    set_x(new_x);
    set_y(new_y);
}

// Copy constructor
Point::Point(const Point& other) {
    x = other.x;
    y = other.y;
}

// Assignment operator
Point& Point::operator=(const Point& other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
    }
    return *this;
}

// Operator<< (output)
std::ostream& operator<<(std::ostream& out, const Point& p) {
    out << '(' << p.x << ", " << p.y << ')';
    return out;
}

// Operator>> (input)
std::istream& operator>>(std::istream& in, Point& p) {
    char dummy;
    in >> dummy >> p.x >> dummy >> p.y >> dummy;  // Reads (x, y)
    return in;
}

// Equality operator
bool Point::operator==(const Point& other) const {
    return x == other.x && y == other.y;
}

// Inequality operator
bool Point::operator!=(const Point& other) const {
    return !(*this == other);
}

// Distance operator
double Point::operator-(const Point& other) const {
    double dx = x - other.x;
    double dy = y - other.y;
    return std::sqrt(dx * dx + dy * dy);
}

// Midpoint operator
Point Point::operator/(const Point& other) const {
    return Point((x + other.x) / 2.0, (y + other.y) / 2.0);
}

// Accessors
void Point::set_x(double new_x) {
    x = new_x;
}

void Point::set_y(double new_y) {
    y = new_y;
}

// Flip across X axis
Point Point::flip_x() const {
    return Point(x, -y);
}

// Flip across Y axis
Point Point::flip_y() const {
    return Point(-x, y);
}

// Shift along X axis
Point Point::shift_x(double move_by) const {
    return Point(x + move_by, y);
}

// Shift along Y axis
Point Point::shift_y(double move_by) const {
    return Point(x, y + move_by);
}
