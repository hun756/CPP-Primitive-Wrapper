#include <gtest/gtest.h>
#include "integer.hpp"


TEST(Integer, ParseFromString)
{
    Pw::Integer p;

    p.parse(std::string("-45"));
    ASSERT_EQ(p.value(), -45);

    p.parse(std::string("30"));
    ASSERT_EQ(p.value(), 30);

    p.parse(std::string("4321"));
    ASSERT_EQ(p.value(), 4321);
}


TEST(Integer, ParseFromCstyleString)
{
    Pw::Integer p;

    p.parse("-45");
    ASSERT_EQ(p.value(), -45);

    p.parse("30");
    ASSERT_EQ(p.value(), 30);

    p.parse("4321");
    ASSERT_EQ(p.value(), 4321);
}


TEST(Integer, ParseFromFloat)
{
    Pw::Integer p;

    p.parse(-45.8f);
    ASSERT_EQ(p.value(), -45);

    p.parse(30.9999f);
    ASSERT_EQ(p.value(), 30);

    p.parse(4321.0999f);
    ASSERT_EQ(p.value(), 4321);
}