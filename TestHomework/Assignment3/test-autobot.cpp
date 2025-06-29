/*Maksim Lazarev st128707@student.spbu.ru*/

#include "gtest/gtest.h"
#include "autobot.h"

TEST(autobot, setNumber) {
    Autobot aut(10, "aut", 10, 9, "bus", 8, 7);
    aut.setNumber(100);
    ASSERT_EQ(100, aut.getNumber());
}

TEST(autobot, autobotAtack) {
    Autobot aut(10, "aut", 9, 8, "bus", 7, 6);
    ASSERT_TRUE(aut.autobotAtack());
}