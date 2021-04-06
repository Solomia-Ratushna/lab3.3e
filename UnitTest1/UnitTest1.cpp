#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.3e/Rational.cpp"
#include "../lab3.3e/Pair.h"
#include "../lab3.3e/Pair.cpp"
#include "../lab3.3e/Object.h"
#include "../lab3.3e/Object.cpp"
#include "../lab3.3e/Rational.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33D
{
	TEST_CLASS(UnitTest33D)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational  a(2, 10), b(2, 10);
			Assert::AreEqual(a == b, true);
		}
	};
}
