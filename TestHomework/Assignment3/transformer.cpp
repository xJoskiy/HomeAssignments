/*Maksim Lazarev st128707@student.spbu.ru*/

#include "transformer.h"

Transformer::Transformer(int ammo, int level, std::string name, unsigned int heal, unsigned int range):
 _ammo(ammo), _level(level), _name(name), _heal(heal), _range(range)
{ }

void Transformer::setLevel(int level) {
    _level = level;
}

int Transformer::getLevel() {
    return _level;
}

void Transformer::setAmmo(int ammo) {
    _ammo = ammo;
}

int Transformer::getAmmo() {
    return _ammo;
}

void Transformer::fire() {
    if (_ammo > 0) {
        _ammo -= 1;
    }
}

std::string Transformer::getName() {
    return _name;
}

void Transformer::setName(std::string new_name) {
    _name = new_name;
}

unsigned int Transformer::getHeal() {
    return _heal.getHealpoint();
}

void Transformer::setHeal(unsigned int healPoint) {
    _heal.setHealpoint(healPoint);
}

void Transformer::setNameWeapon(Weapon* newWeapon) {
    _nameWeapon = newWeapon;
}

std::string Transformer::getNameWeapon() {
    if (_nameWeapon) {
        return _nameWeapon->getNameWeapon();
    } else {
        return "No weapon";
    }
}

void Transformer::levelUp() {
    _level += 1;
}

bool Transformer::ultimate() {
    return true;
}

unsigned int Transformer::getRange() {
    return _range;
}

void Transformer::setRange(unsigned int range) {
    _range = range;
}

Transformer::~Transformer() 
{ }