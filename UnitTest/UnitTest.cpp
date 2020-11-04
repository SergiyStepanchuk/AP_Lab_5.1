#include "pch.h"
#include "CppUnitTest.h"
#include "../Program/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(met_h)
		{
			double _h = h(2, 1);
			Assert::IsFalse(abs(_h - (-0.247214)) > 0.000001, L"Incorrect method h!");
		}
	};
}
