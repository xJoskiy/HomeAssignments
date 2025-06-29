/*Maksim Lazarev st128707@student.spbu.ru*/

#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include "ironheart.h"
#include "weapon.h"

class Transformer
{
public:
    Transformer(int, int, std::string, unsigned int, unsigned int);
    Transformer();
    Transformer(int);
    Transformer(int, int);
    Transformer(int, int, std::string);
    Transformer(int, int, std::string, unsigned int);
    virtual void transform();
    virtual void ulta();
    virtual void openFire();
    void fire();
    void setAmmo(int);
    int getAmmo();
    void setLevel(int);
    int getLevel();
    void setName(std::string);
    std::string getName();
    unsigned int getHeal();
    void setHeal(unsigned int);
    void setNameWeapon(Weapon*);
    std::string getNameWeapon();
    void levelUp();
    bool ultimate();
    unsigned int getRange();
    void setRange(unsigned int);
    bool operator>(Transformer&);
    bool operator==(Transformer&);
    bool operator>=(Transformer&);
    bool operator<=(Transformer&);
    bool operator<(Transformer&);
    bool operator!=(Transformer&);
    ~Transformer();
private:
    int _ammo;
    int _level;
    std::string _name;
    unsigned int _range;
    IronHeart _heal; /*Composition*/
    Weapon* _nameWeapon = nullptr; /*Association*/
};

std::ostream& operator<<(std::ostream&, Transformer&);

#endif