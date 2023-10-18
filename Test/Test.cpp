#include "pch.h"
#include "CppUnitTest.h"
#include "../5.0/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = sum(2, 3);
			Assert::AreEqual(t, 5);

		}
	};
}
