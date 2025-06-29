/*Maksim Lazarev st128707@student.spbu.ru*/

#include "transformer.h"

Transformer::Transformer(int ammo, int level, std::string name, unsigned int heal, unsigned int range):
    _ammo(ammo), _level(level), _name(name), _heal(heal), _range(range)
{ }

Transformer::Transformer(int ammo, int level, std::string name): Transformer(ammo, level, name, 1)
{ }

Transformer::Transformer(int ammo, int level, std::string name, unsigned int heal): Transformer(ammo, level, name, heal, 0)
{ }

Transformer::Transformer(int ammo, int level): Transformer(ammo, level, "Noname")
{ }

Transformer::Transformer(int ammo): Transformer(ammo, 0)
{ }

Transformer::Transformer(): Transformer(0)
{ }

void Transformer::setLevel(int level)
{
    _level = level;
}

int Transformer::getLevel()
{
    return _level;
}

void Transformer::setAmmo(int ammo)
{
    _ammo = ammo;
}

int Transformer::getAmmo()
{
    return _ammo;
}

void Transformer::fire()
{
    if (_ammo > 0)
    {
        _ammo -= 1;
    }
}

std::string Transformer::getName()
{
    return _name;
}

void Transformer::setName(std::string new_name)
{
    _name = new_name;
}

unsigned int Transformer::getHeal()
{
    return _heal.getHealpoint();
}

void Transformer::setHeal(unsigned int healPoint)
{
    _heal.setHealpoint(healPoint);
}

void Transformer::setNameWeapon(Weapon* newWeapon)
{
    _nameWeapon = newWeapon;
}

std::string Transformer::getNameWeapon()
{
    if (_nameWeapon)
    {
        return _nameWeapon->getNameWeapon();
    }
    else
    {
        return "No weapon";
    }
}

void Transformer::levelUp()
{
    _level += 1;
}

bool Transformer::ultimate()
{
    return true;
}

unsigned int Transformer::getRange()
{
    return _range;
}

void Transformer::setRange(unsigned int range)
{
    _range = range;
}

Transformer::~Transformer()
{ }

std::ostream& operator<<(std::ostream& os, Transformer& transform)
{
    os << "Ammo: " << transform.getAmmo() << '\n';
    os << "Level: " << transform.getLevel() << '\n';
    os << "Name: " << transform.getName() << "\n";
    os << "Heal: " << transform.getHeal() << "\n";
    os << "Range: " << transform.getRange() << "\n";
    os << "Weapon: " << transform.getNameWeapon() << '\n';
    return os;
}

bool Transformer::operator>(Transformer& other)
{
    int sum_1 = this->_ammo + this->_level + this->_heal.getHealpoint() + this->_range;
    int sum_2 = other.getAmmo() + other.getHeal() + other.getLevel() + other.getRange();
    return sum_1 > sum_2;
}

bool Transformer::operator==(Transformer& other)
{
    int sum_1 = this->_ammo + this->_level + this->_heal.getHealpoint() + this->_range;
    int sum_2 = other.getAmmo() + other.getHeal() + other.getLevel() + other.getRange();
    return sum_1 == sum_2;
}

bool Transformer::operator>=(Transformer& other)
{
    return (*this > other) || (*this == other);
}

bool Transformer::operator!=(Transformer& other)
{
    return !(*this == other);
}

bool Transformer::operator<(Transformer& other)
{
    return !(*this > other) && (*this != other);
}

bool Transformer::operator<=(Transformer& other)
{
    return !(*this > other) || (*this == other);
}

void Transformer::openFire()
{
    std::cout << "openFire, Transformer" << '\n';
} 

void Transformer::ulta()
{
    std::cout << "ulta, Transformer" << '\n';
}

void Transformer::transform()
{
    std::cout << "transform, Transformer" << '\n';
}
