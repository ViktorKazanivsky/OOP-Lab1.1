#include "Line.h"
#include <iostream>

int main() {
    double A, B, x;

    // �������� ������� A �� B � ���������
    std::cout << " enter A: ";
    std::cin >> A;

    std::cout << " enter B: ";
    std::cin >> B;

    // ��������� ��'���� Line �� ��������� makeLine
    Line line = Line(A, B);

    // ��������� ��'���� Line
    line.Display();

    // �������� �������� x
    std::cout << " enter x: ";
    std::cin >> x;

    // ���������� �� ��������� �������� y
    std::cout << " y = " << line.function(x) << std::endl;

    return 0;
}