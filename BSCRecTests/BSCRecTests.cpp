#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
	int getPerimeter(int length, int width);
	int getArea(int length, int width);
	int setLength(int input);
	int setWidth(int input);
}


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BSCRecTests
{
	TEST_CLASS(RectangleTests)
	{
	public:
		
		// Test for getPerimeter function
		TEST_METHOD(Test_getPerimeter_Normal)
		{
			// Arrange
			int length = 5;
			int width = 7;
			int expectedPerimeter = 24;

			// Act 
			int actual = getPerimeter(length, width);
			// Assert
			Assert::AreEqual(expectedPerimeter, actual);
		}

		// Test for getArea function
		TEST_METHOD(SetLength_ValidLow)
		{
			// Arrange
			int input = 1;
			int expected = 1;

			// Act 
			int actual = setLength(input);

			// Assert
			Assert::AreEqual(expected, actual);
		}

	};
}
