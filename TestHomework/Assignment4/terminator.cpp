/*Maksim Lazarev st128707@student.spbu.ru*/

#include "terminator.h"

Terminator::Terminator(int number, std::string terminatorName, int ammo,
                       int level, std::string name, unsigned int heal, unsigned int range): _number(number), _terminatorName(terminatorName), Transformer(ammo, level, name, heal, range)
{ }

Terminator::Terminator(int number, std::string terminatorName): _number(number), _terminatorName(terminatorName), Transformer()
{ }

Terminator::Terminator(int number, std::string terminatorName, int ammo): _number(number),
    _terminatorName(terminatorName), Transformer(ammo)
{ }

Terminator::Terminator(int number, std::string terminatorName, int ammo,
                       int level): _number(number),
    _terminatorName(terminatorName), Transformer(ammo, level)
{ }

Terminator::Terminator(int number, std::string terminatorName, int ammo,
                       int level, std::string name): _number(number),
    _terminatorName(terminatorName), Transformer(ammo, level, name)
{ }

Terminator::Terminator(int number, std::string terminatorName, int ammo,
                       int level, std::string name, unsigned int heal): _number(number),
    _terminatorName(terminatorName), Transformer(ammo, level, name, heal)
{ }

bool Terminator::teleport()
{
    return true;
}

bool Terminator::terminatorAtack()
{
    return true;
}

void Terminator::setNumber(int number)
{
    _number = number;
}

int Terminator::getNumber()
{
    return _number;
}

void Terminator::setTerminatorName(std::string terminatorName)
{
    _terminatorName = terminatorName;
}

std::string Terminator::getTerminatorName()
{
    return _terminatorName;
}

std::ostream& operator<<(std::ostream& os, Terminator& transform)
{
    os << "Ammo: " << transform.getAmmo() << '\n';
    os << "Level: " << transform.getLevel() << '\n';
    os << "Name: " << transform.getName() << "\n";
    os << "Heal: " << transform.getHeal() << "\n";
    os << "Range: " << transform.getRange() << "\n";
    os << "Weapon: " << transform.getNameWeapon() << '\n';
    os << "Number: " << transform.getNumber() << '\n';
    os << "Terminator name: " << transform.getTerminatorName() << '\n';
    return os;
}