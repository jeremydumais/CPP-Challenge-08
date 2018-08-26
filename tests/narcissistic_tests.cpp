#include <gtest/gtest.h>
#include "../include/narcissistic.h"
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, char**argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

class First9ArmstrongNumbers : public ::testing::Test
{
public:
    First9ArmstrongNumbers()
    {
        for(unsigned i=1;i<=9;i++)
            m_numbers.push_back(i);
    }

    vector<int> m_numbers;
};

TEST(isNarcissisticNumber, Number0ReturnFalse)
{
    ASSERT_FALSE(narcissisticHelper::isNarcissisticNumber(0));
}

TEST_F(First9ArmstrongNumbers, Numbers1To9ReturnTrue)
{
    for(auto i: m_numbers)
    {
        ASSERT_TRUE(narcissisticHelper::isNarcissisticNumber(i));
    }
}

TEST(isNarcissisticNumber, Number10ReturnFalse)
{
    ASSERT_FALSE(narcissisticHelper::isNarcissisticNumber(10));
}

TEST(isNarcissisticNumber, Number100ReturnFalse)
{
    ASSERT_FALSE(narcissisticHelper::isNarcissisticNumber(100));
}

TEST(isNarcissisticNumber, Number153ReturnTrue)
{
    ASSERT_TRUE(narcissisticHelper::isNarcissisticNumber(153));
}

TEST(isNarcissisticNumber, Number370ReturnTrue)
{
    ASSERT_TRUE(narcissisticHelper::isNarcissisticNumber(370));
}
