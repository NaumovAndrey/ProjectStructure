#include <iostream>
#include "tools.h"
#include "coor.h"

int main() {
    Coordinate start = inputCoordinate();
    Coordinate end = inputCoordinate();

    scalpel(start, end);
    hemostat(end);
    tweezers(end);
    suture(start, end);

    return 0;
}