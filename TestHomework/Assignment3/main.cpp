/*Maksim Lazarev st128707@student.spbu.ru*/

#include "autobot.h"
#include "decepticon.h"
#include "terminator.h"
#include <iostream>

int main() {
    Transformer rm(1, 1, "Hello", 5, 10);
    std::cout << rm.getHeal() << '\n';
    rm.fire();
    rm.setHeal(15);
    std::cout << rm.getHeal() << '\n';
    std::cout << rm.getAmmo() << '\n';
    Decepticon dec(1, "dec", 2, 5, "Hello", 3, 2);
    Weapon sword("Sword");
    dec.setNameWeapon(&sword);
    std::cout << dec.getNameWeapon() << '\n';
}