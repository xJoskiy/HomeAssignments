/*Maksim Lazarev st128707@student.spbu.ru*/

#include "gtest/gtest.h"
#include "decepticon.h"

TEST(decepticon, setName)
{
    Decepticon dec(100, "dec", 10, 9, "bus", 8, 7);
    dec.setName("DEC");
    ASSERT_EQ("DEC", dec.getName());
}

TEST(decepticon, getWeapon)
{
    Decepticon dec(100, "dec", 10, 9, "bus", 8, 7);
    ASSERT_EQ("No weapon", dec.getNameWeapon());
}

TEST(decepticon, lessThan)
{
    Decepticon dc1(1, "dc1", 1, 2, "bus", 3, 5);
    Decepticon dc2(2, "dc2", 1, 2, "bus", 5, 4);
    ASSERT_TRUE(dc1 < dc2);
}