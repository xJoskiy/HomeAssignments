/*Maksim Lazarev st128707@student.spbu.ru*/

#include "gtest/gtest.h"
#include "terminator.h"

TEST(terminator, teleport) {
    Terminator ter(12, "ter", 10, 9, "bus", 8, 7);
    ASSERT_TRUE(ter.teleport());
}

TEST(terminator, getNumber) {
    Terminator ter(12, "ter", 10, 9, "bus", 8, 7);
    ASSERT_EQ(12, ter.getNumber());
}
