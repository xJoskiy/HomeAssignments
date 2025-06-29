/*Maksim Lazarev st128707@student.spbu.ru*/

#include "gtest/gtest.h"
#include "transformer.h"

TEST(transformer, fire)
{
    Transformer bus(10, 10, "bus", 19, 19);
    bus.fire();
    ASSERT_EQ(9, bus.getAmmo());
}

TEST(transformer, ultimate)
{
    Transformer bus(10, 10, "bus", 19, 19);
    ASSERT_TRUE(bus.ultimate());
}

TEST(transformer, getName)
{
    Transformer bus(10, 10, "bus", 19, 19);
    ASSERT_EQ("bus", bus.getName());
}

TEST(transformer, weapon)
{
    Transformer bus(10, 10, "bus", 1, 1);
    Weapon katana("Katana");
    bus.setNameWeapon(&katana);
    ASSERT_EQ("Katana", bus.getNameWeapon());
}

TEST(transformer, heal)
{
    Transformer bus(10, 9, "bus", 8, 7);
    ASSERT_EQ(8, bus.getHeal());
}

TEST(transformer, operatorIsGreater)
{
    Transformer tr1(1, 2, "tr1", 4, 3);
    Transformer tr2(2, 3, "tr2", 23, 56);
    ASSERT_TRUE(tr2 > tr1);
}

TEST(transformer, operatorIsGreaterOrEqual_1)
{
    Transformer tr1(1, 2, "tr1", 4, 3);
    Transformer tr2(1, 2, "tr2", 4, 3);
    ASSERT_TRUE(tr2 >= tr1);
}

TEST(transformer, operatorIsGreaterOrEqual_2)
{
    Transformer tr1(1, 2, "tr1", 4, 3);
    Transformer tr2(1, 2, "tr2", 4, 6);
    ASSERT_TRUE(tr2 >= tr1);
}

TEST(transformer, operatorIsLessOrEqual_1)
{
    Transformer tr1(1, 2, "tr1", 4, 3);
    Transformer tr2(1, 2, "tr2", 4, 3);
    ASSERT_TRUE(tr2 <= tr1);
}

TEST(transformer, operatorIsLessOrEqual_2)
{
    Transformer tr1(1, 2, "tr1", 4, 3);
    Transformer tr2(1, 2, "tr2", 2, 3);
    ASSERT_TRUE(tr2 <= tr1);
}