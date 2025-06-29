/*Maksim Lazarev st128707@student.spbu.ru*/

#ifndef DECEPTICON_H
#define DECEPTICON_H
#include "transformer.h"

class Decepticon: public Transformer
{
public:
    Decepticon(int, std::string, int, int, std::string, unsigned int, unsigned int);
    Decepticon(int, std::string);
    Decepticon(int, std::string, int);
    Decepticon(int, std::string, int, int, std::string, unsigned int);
    Decepticon(int, std::string, int, int, std::string);
    Decepticon(int, std::string, int, int);
    void transform() override;
    void ulta() override;
    void openFire() override;
    bool decepticonAtack();
    void setNumber(int);
    int getNumber();
    void setDecepticonName(std::string);
    std::string getDecepticonName();
private:
    int _number;
    std::string _decepticonName;
};

std::ostream& operator<<(std::ostream&, Decepticon&);

#endif