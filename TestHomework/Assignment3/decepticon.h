/*Maksim Lazarev st128707@student.spbu.ru*/

#ifndef DECEPTICON_H
#define DECEPTICON_H
#include "transformer.h"

class Decepticon: public Transformer {
public:
    Decepticon(int, std::string, int, int, std::string, unsigned int, unsigned int);
    bool transform();
    bool decepticonAtack();
    void setNumber(int);
    int getNumber();
    void setDecepticonName(std::string);
    std::string getDecepticonName();
private:
    int _number;
    std::string _decepticonName;
};

#endif