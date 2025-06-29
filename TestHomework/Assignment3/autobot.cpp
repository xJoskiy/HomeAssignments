/*Maksim Lazarev st128707@student.spbu.ru*/

#include "autobot.h"

Autobot::Autobot(int number, std::string autobotName, int ammo,
 int level, std::string name, unsigned int heal, unsigned int range): Transformer(ammo, level, name, heal, range) {
    _number = number;
    _autobotName = autobotName;
 }

 bool Autobot::transform() {
    return true;
 }

 bool Autobot::autobotAtack() {
    return true;
 }

void Autobot::setNumber(int number) {
    _number = number;
}

int Autobot::getNumber() {
    return _number;
}

void Autobot::setAutobotName(std::string autobotName) {
    _autobotName = autobotName;
}

std::string Autobot::getAutobotName() {
    return _autobotName;
}