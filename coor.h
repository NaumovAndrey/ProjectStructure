#pragma once

struct Coordinate {
    double x;
    double y;
};
bool operator==(const Coordinate& lhs, const Coordinate& rhs);
Coordinate inputCoordinate();
void printCoordinate(const Coordinate& coord);