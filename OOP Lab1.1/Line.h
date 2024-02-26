#pragma once

class Line {
private:
    double first;  // A
    double second; // B

public:
    Line();  // Конструктор за замовчуванням
    Line(double A, double B);  // Конструктор з параметрами

    void Init(double A, double B);  // Метод ініціалізації
    void Read();  // Метод введення з клавіатури
    void Display();  // Метод виведення на екран

    double function(double x);  // Метод обчислення для заданого x
};