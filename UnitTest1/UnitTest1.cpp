#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_5.1A/Goods.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double first = 10.02;
			int second = 1;
			Goods g;
			g.Init(first, second);
			Assert::AreEqual(10.02, g.cost(), 0.01);
		}
	};
}
