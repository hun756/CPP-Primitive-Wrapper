#include <gtest/gtest.h>
#include "big_integer.hpp"
#include <vector>


TEST(BigInteger, ConstructorTest)
{
    std::vector<int> testVec;
    const std::string checkStr = "1231464548789645456135486313253132151303135130313132";
    Pw::BigInteger bInt(checkStr);

    for (auto&& var : checkStr)
        testVec.push_back(var - '0');

    ASSERT_EQ(testVec, bInt.value());
}