/*Maksim Lazarev st128707@student.spbu.ru*/

#include "decepticon.h"

Decepticon::Decepticon(int number, std::string decepticonName, int ammo,
                       int level, std::string name, unsigned int heal, unsigned int range): _number(number),
    _decepticonName(decepticonName), Transformer(ammo, level, name, heal, range)
{ }

Decepticon::Decepticon(int number, std::string decepticonName): _number(number), _decepticonName(decepticonName), Transformer()
{ }

Decepticon::Decepticon(int number, std::string decepticonName, int ammo): _number(number),
    _decepticonName(decepticonName), Transformer(ammo)
{ }

Decepticon::Decepticon(int number, std::string decepticonName, int ammo,
                       int level): _number(number),
    _decepticonName(decepticonName), Transformer(ammo, level)
{ }

Decepticon::Decepticon(int number, std::string decepticonName, int ammo,
                       int level, std::string name): _number(number),
    _decepticonName(decepticonName), Transformer(ammo, level, name)
{ }

Decepticon::Decepticon(int number, std::string decepticonName, int ammo,
                       int level, std::string name, unsigned int heal): _number(number),
    _decepticonName(decepticonName), Transformer(ammo, level, name, heal)
{ }


bool Decepticon::decepticonAtack()
{
    return true;
}

void Decepticon::setNumber(int number)
{
    _number = number;
}

int Decepticon::getNumber()
{
    return _number;
}

void Decepticon::setDecepticonName(std::string decepticonName)
{
    _decepticonName = decepticonName;
}

std::string Decepticon::getDecepticonName()
{
    return _decepticonName;
}

std::ostream& operator<<(std::ostream& os, Decepticon& transform)
{
    os << "Ammo: " << transform.getAmmo() << '\n';
    os << "Level: " << transform.getLevel() << '\n';
    os << "Name: " << transform.getName() << "\n";
    os << "Heal: " << transform.getHeal() << "\n";
    os << "Range: " << transform.getRange() << "\n";
    os << "Weapon: " << transform.getNameWeapon() << '\n';
    os << "Number: " << transform.getNumber() << '\n';
    os << "Decepticon name: " << transform.getDecepticonName() << '\n';
    return os;
}

void Decepticon::openFire()
{
    std::cout << "openFire, Decepticon" << '\n';
} 

void Decepticon::ulta()
{
    std::cout << "ulta, Decepticon" << '\n';
}

void Decepticon::transform()
{
    std::cout << "transform, Decepticon" << '\n';
}