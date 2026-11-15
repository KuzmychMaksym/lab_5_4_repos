#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5_4/lab_5_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int N = 5;
			int k = 1;

			double expectedResult = R5(N, k);
			double actualResult = R1(N, k, k);

			Assert::AreEqual(expectedResult, actualResult);
		}

		TEST_METHOD(TestMethod2)
		{
			int N = 5;
			int k = 1;

			double expectedResult = R5(N, k);
			double actualResult = R2(N, k, N);

			Assert::AreEqual(expectedResult, actualResult);
		}

		TEST_METHOD(TestMethod3)
		{
			int N = 5;
			int k = 1;
			int t = 0;

			double expectedResult = R5(N, k);
			double actualResult = R3(N, k, k, t);

			Assert::AreEqual(expectedResult, actualResult);
		}

		TEST_METHOD(TestMethod4)
		{
			int N = 5;
			int k = 1;
			int t = 0;

			double expectedResult = R5(N, k);
			double actualResult = R4(N, k, N, t);

			Assert::AreEqual(expectedResult, actualResult);
		}

	};
}
