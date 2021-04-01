#include "pch.h"
#include "CppUnitTest.h"

#include "../Lab_3.6/B1.cpp"
#include "../Lab_3.6/B2.cpp"
#include "../Lab_3.6/B3.cpp"

#include "../Lab_3.6/D1.cpp"
#include "../Lab_3.6/D2.cpp"
#include "../Lab_3.6/D3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab36
{
	TEST_CLASS(UnitTestLab36)
	{
	public:
		
		TEST_METHOD(Test)
		{
			D2 Test(123, 432, 234, 234, 234, 342);
			Assert::AreEqual(sizeof(D2), size_t(28));
		}
	};
}
