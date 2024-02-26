#include "Line.h"
#include <iostream>

int main() {
    double A, B, x;

    // Введення значень A та B з клавіатури
    std::cout << " enter A: ";
    std::cin >> A;

    std::cout << " enter B: ";
    std::cin >> B;

    // Створення об'єкта Line за допомогою makeLine
    Line line = Line(A, B);

    // Виведення об'єкта Line
    line.Display();

    // Введення значення x
    std::cout << " enter x: ";
    std::cin >> x;

    // Обчислення та виведення значення y
    std::cout << " y = " << line.function(x) << std::endl;

    return 0;
}