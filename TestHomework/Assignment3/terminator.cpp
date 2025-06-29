/*Maksim Lazarev st128707@student.spbu.ru*/

#include "terminator.h"

Terminator::Terminator(int number, std::string terminatorName, int ammo,
 int level, std::string name, unsigned int heal, unsigned int range): Transformer(ammo, level, name, heal, range) {
    _number = number;
    _terminatorName = terminatorName;
 }

 bool Terminator::teleport() {
    return true;
 }

 bool Terminator::terminatorAtack() {
    return true;
 }

void Terminator::setNumber(int number) {
    _number = number;
}

int Terminator::getNumber() {
    return _number;
}

void Terminator::setTerminatorName(std::string terminatorName) {
    _terminatorName = terminatorName;
}

std::string Terminator::getTerminatorName() {
    return _terminatorName;
}