/*Maksim Lazarev st128707@student.spbu.ru*/

#include "decepticon.h"

Decepticon::Decepticon(int number, std::string decepticonName, int ammo,
 int level, std::string name, unsigned int heal, unsigned int range): Transformer(ammo, level, name, heal, range) {
    _number = number;
    _decepticonName = decepticonName;
 }

 bool Decepticon::transform() {
    return true;
 }

 bool Decepticon::decepticonAtack() {
    return true;
 }

void Decepticon::setNumber(int number) {
    _number = number;
}

int Decepticon::getNumber() {
    return _number;
}

void Decepticon::setDecepticonName(std::string decepticonName) {
    _decepticonName = decepticonName;
}

std::string Decepticon::getDecepticonName() {
    return _decepticonName;
}