#pragma once

class Line {
private:
    double first;  // A
    double second; // B

public:
    Line();  // ����������� �� �������������
    Line(double A, double B);  // ����������� � �����������

    void Init(double A, double B);  // ����� �����������
    void Read();  // ����� �������� � ���������
    void Display();  // ����� ��������� �� �����

    double function(double x);  // ����� ���������� ��� �������� x
};