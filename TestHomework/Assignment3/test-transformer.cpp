/*Maksim Lazarev st128707@student.spbu.ru*/

#include "gtest/gtest.h"
#include "transformer.h"

TEST(transformer, fire) {
    Transformer bus(10, 10, "bus", 19, 19);
    bus.fire();
    ASSERT_EQ(9, bus.getAmmo());
}

TEST(transformer, ultimate) {
    Transformer bus(10, 10, "bus", 19, 19);
    ASSERT_TRUE(bus.ultimate());
}

TEST(transformer, getName) {
    Transformer bus(10, 10, "bus", 19, 19);
    ASSERT_EQ("bus", bus.getName());
}

TEST(transformer, weapon) {
    Transformer bus(10, 10, "bus", 1, 1);
    Weapon katana("Katana");
    bus.setNameWeapon(&katana);
    ASSERT_EQ("Katana", bus.getNameWeapon());
}

TEST(transformer, heal) {
    Transformer bus(10, 9, "bus", 8, 7);
    ASSERT_EQ(8, bus.getHeal());
}