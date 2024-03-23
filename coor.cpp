#include "coor.h"
#include <iostream>

bool operator==(const Coordinate& lhs, const Coordinate& rhs) {
    return lhs.x == rhs.x && lhs.y == rhs.y;
}

Coordinate inputCoordinate() {
    Coordinate coord;
    std::cout << "Enter x coordinate: ";
    std::cin >> coord.x;
    std::cout << "Enter y coordinate: ";
    std::cin >> coord.y;
    return coord;
}

void printCoordinate(const Coordinate& coord) {
    std::cout << "(" << coord.x << ", " << coord.y << ")";
}