/*Maksim Lazarev st128707@student.spbu.ru*/

#include "gtest/gtest.h"
#include "decepticon.h"

TEST(decepticon, setName) {
    Decepticon dec(100, "dec", 10, 9, "bus", 8, 7);
    dec.setName("DEC");
    ASSERT_EQ("DEC", dec.getName());
}

TEST(decepticon, getWeapon) {
    Decepticon dec(100, "dec", 10, 9, "bus", 8, 7);
    ASSERT_EQ("No weapon", dec.getNameWeapon());
}