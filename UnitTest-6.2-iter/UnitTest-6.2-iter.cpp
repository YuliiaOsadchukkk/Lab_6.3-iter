#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.3-iter/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62iter
{
	TEST_CLASS(UnitTest62iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int mass[4] = { -1, -1, -4, 3};
			Assert::AreEqual(Sum(mass, 4), 1);
			Assert::AreEqual(Sum<int>(mass, 4), 1);
		}
	};
}
