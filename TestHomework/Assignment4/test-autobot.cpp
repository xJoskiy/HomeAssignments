/*Maksim Lazarev st128707@student.spbu.ru*/

#include "gtest/gtest.h"
#include "autobot.h"

TEST(autobot, setNumber)
{
    Autobot aut(10, "aut", 10, 9, "bus", 8, 7);
    aut.setNumber(100);
    ASSERT_EQ(100, aut.getNumber());
}

TEST(autobot, autobotAtack)
{
    Autobot aut(10, "aut", 9, 8, "bus", 7, 6);
    ASSERT_TRUE(aut.autobotAtack());
}

TEST(autobot, autobot_overloading_1)
{
    Autobot aut(1, "aut");
    ASSERT_EQ(0, aut.getAmmo());
}

TEST(autobot, autobot_overloading_2)
{
    Autobot aut(1, "aut", 4);
    ASSERT_EQ(0, aut.getLevel());
}

TEST(autobot, autobot_overloading_3)
{
    Autobot aut(1, "aut", 5, 6);
    ASSERT_EQ("Noname", aut.getName());
}

TEST(autobot, autobot_overloading_4)
{
    Autobot aut(1, "aut", 5, 34, "bus", 6);
    ASSERT_EQ(6, aut.getHeal());
}