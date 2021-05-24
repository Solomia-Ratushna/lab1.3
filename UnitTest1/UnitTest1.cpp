#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.3/Vector.h"
#include "../lab1.3/Vector.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			VectorN a, b;
			a.SetN(5);
			b.SetN(5);
			int A= a.GetN();
			int B = a.GetN();
			Assert::AreEqual(A, B);
		}
	};
}
