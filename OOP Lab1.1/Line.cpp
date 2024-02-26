#include "Line.h"
#include <iostream>

Line::Line() : first(1.0), second(0.0) {}

Line::Line(double A, double B) {
    if (A == 0) {
        std::cerr << " A cannot be zero." << std::endl;
        exit(1);
    }

    first = A;
    second = B;
}

void Line::Init(double A, double B) {
    if (A == 0) {
        std::cerr << " A cannot be zero." << std::endl;
        exit(1);
    }

    first = A;
    second = B;
}

void Line::Read() {
    std::cin >> first;

    if (first == 0) {
        std::cerr << " A cannot be zero." << std::endl;
        exit(1);
    }

    std::cin >> second;
}

void Line::Display() {
    std::cout << " y = " << first << "x + " << second << std::endl;
}

double Line::function(double x) {
    return first * x + second;
}