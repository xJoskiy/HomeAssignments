#include <gtest/gtest.h>
#include "templ.h"

TEST(TemplSpecialization, IntReturnsTrue)
{
    int obj = 1;
    std::vector<float> vect = {1, 2, 3};
    Templ<int> temp(obj, 3, vect);
    ASSERT_TRUE(temp.foo());
}

TEST(TemplSpecialization, DoubleReturnsFalse)
{
    double obj = 7.0;
    std::vector<float> vect = {7, 9, 3};
    Templ<double> temp(obj, 0, vect);
    ASSERT_FALSE(temp.foo());
}

TEST(TemplWithClass1, ReturnsTrueWhenNumberMoreThanNull)
{
    Class1 obj;
    std::vector<float> vect = {7, 9, 3};
    Templ<Class1> temp(obj, 9, vect);
    ASSERT_TRUE(temp.foo());
}

TEST(TemplWithClass1, ReturnsFalseWhenNumberNegative)
{
    Class1 obj;
    std::vector<float> vect = {7, 9, 3};
    Templ<Class1> temp(obj, -3, vect);
    ASSERT_FALSE(temp.foo());
}

TEST(TemplWithClass2, ReturnsTrueWhenVectorNotEmpty)
{
    Class2 obj;
    std::vector<float> vect = {1, 2, 3};
    Templ<Class2> temp(obj, 0, vect);
    ASSERT_TRUE(temp.foo());
}

TEST(TemplWithClass2, ReturnsFalseWhenVectorEmpty)
{
    Class2 obj;
    std::vector<float> vect = {};
    Templ<Class2> temp(obj, 0, vect);
    ASSERT_FALSE(temp.foo());
}

TEST(TemplWithClass3, ReturnsTrueWhenNumberEqualsNegativeVectorSize)
{
    Class3 obj;
    std::vector<float> vect = {7, 9, 3};
    Templ<Class3> temp(obj, -3, vect);
    ASSERT_TRUE(temp.foo());
}

TEST(TemplWithClass3, ReturnsFalseWhenNumberNotEqualsNegativeVectorSize)
{
    Class3 obj;
    std::vector<float> vect = {7, 9, 3};
    Templ<Class3> temp(obj, 9, vect);
    ASSERT_FALSE(temp.foo());
}
