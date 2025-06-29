/*Maksim Lazarev st128707@student.spbu.ru*/

#include "autobot.h"

Autobot::Autobot(int number, std::string autobotName, int ammo,
                 int level, std::string name, unsigned int heal, unsigned int range): _number(number), _autobotName(autobotName), Transformer(ammo, level, name, heal, range)
{ }

Autobot::Autobot(int number, std::string autobotName): _number(number), _autobotName(autobotName), Transformer()
{ }

Autobot::Autobot(int number, std::string autobotName, int ammo): _number(number), _autobotName(autobotName), Transformer(ammo)
{ }

Autobot::Autobot(int number, std::string autobotName, int ammo,
                 int level): _number(number), _autobotName(autobotName), Transformer(ammo, level)
{ }

Autobot::Autobot(int number, std::string autobotName, int ammo,
                 int level, std::string name): _number(number), _autobotName(autobotName), Transformer(ammo, level, name)
{ }

Autobot::Autobot(int number, std::string autobotName, int ammo,
                 int level, std::string name, unsigned int heal): _number(number), _autobotName(autobotName), Transformer(ammo, level, name, heal)
{ }

bool Autobot::autobotAtack()
{
    return true;
}

void Autobot::setNumber(int number)
{
    _number = number;
}

int Autobot::getNumber()
{
    return _number;
}

void Autobot::setAutobotName(std::string autobotName)
{
    _autobotName = autobotName;
}

std::string Autobot::getAutobotName()
{
    return _autobotName;
}

std::ostream& operator<<(std::ostream& os, Autobot& transform)
{
    os << "Ammo: " << transform.getAmmo() << '\n';
    os << "Level: " << transform.getLevel() << '\n';
    os << "Name: " << transform.getName() << "\n";
    os << "Heal: " << transform.getHeal() << "\n";
    os << "Range: " << transform.getRange() << "\n";
    os << "Weapon: " << transform.getNameWeapon() << '\n';
    os << "Number: " << transform.getNumber() << '\n';
    os << "Autobot name: " << transform.getAutobotName() << '\n';
    return os;
}

void Autobot::openFire()
{
    std::cout << "openFire, Autobot" << '\n';
} 

void Autobot::ulta()
{
    std::cout << "ulta, Autobot" << '\n';
}

void Autobot::transform()
{
    std::cout << "transform, Autobot" << '\n';
}