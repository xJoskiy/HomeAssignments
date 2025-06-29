/*Maksim Lazarev st128707@student.spbu.ru*/

#ifndef TERMINATOR_H
#define TERMINATOR_H
#include "transformer.h"

class Terminator: public Transformer
{
public:
    Terminator(int, std::string, int, int, std::string, unsigned int, unsigned int);
    Terminator(int, std::string, int, int, std::string, unsigned int);
    Terminator(int, std::string, int, int, std::string);
    Terminator(int, std::string, int, int);
    Terminator(int, std::string, int);
    Terminator(int, std::string);
    bool teleport();
    bool terminatorAtack();
    void setNumber(int);
    int getNumber();
    void setTerminatorName(std::string);
    std::string getTerminatorName();
private:
    int _number;
    std::string _terminatorName;
};

std::ostream& operator<<(std::ostream&, Terminator&);

#endif