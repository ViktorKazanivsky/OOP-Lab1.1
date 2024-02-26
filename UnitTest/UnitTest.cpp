#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab1.1/Source.cpp"
#include "../OOP Lab1.1/Line.cpp"
#include "../OOP Lab1.1/Line.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double A = 2.0;
			double B = 3.0;
			Line line(A, B);

			double result = line.function(5.0); // ����������, �� x = 5.0

			Assert::AreEqual(13.0, result);// ��������� ������� ������� ���� 13.0
		}
	};
}
