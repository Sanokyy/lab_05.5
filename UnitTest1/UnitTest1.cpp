
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_05.5/lab_05.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestMethod1)
        {
            int maxDepth = 0;

            long long result = C(5, 2, 1, maxDepth);

            Assert::AreEqual(10LL, result);
            Assert::AreEqual(5, maxDepth);
        }
    };
}
