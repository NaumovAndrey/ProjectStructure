#include "tools.h"
#include <iostream>
#include "coor.h"

void scalpel(const Coordinate& start, const Coordinate& end) {
    std::cout << "I made an incision between the dots: ";
    printCoordinate(start);
    std::cout << " and ";
    printCoordinate(end);
    std::cout << std::endl;
}

void hemostat(const Coordinate& point) {
    std::cout << "The applied hemostatic drug at the point: ";
    printCoordinate(point);
    std::cout << std::endl;
}

void tweezers(const Coordinate& point) {
    std::cout << "I used tweezers at the point: ";
    printCoordinate(point);
    std::cout << std::endl;
}

void suture(const Coordinate& start, const Coordinate& end) {
    std::cout << "Stitches have been applied between the points: ";
    printCoordinate(start);
    std::cout << " and ";
    printCoordinate(end);
    std::cout << std::endl;
}