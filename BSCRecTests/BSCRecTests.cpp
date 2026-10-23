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
	TEST_CLASS(BSCRecTests)
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
	};
}
