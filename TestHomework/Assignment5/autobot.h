/*Maksim Lazarev st128707@student.spbu.ru*/

#ifndef AUTOBOT_H
#define AUTOBOT_H
#include "transformer.h"

class Autobot: public Transformer
{
public:
    Autobot(int, std::string, int, int, std::string, unsigned int, unsigned int);
    Autobot(int, std::string, int, int, std::string, unsigned int);
    Autobot(int, std::string, int, int, std::string);
    Autobot(int, std::string, int, int);
    Autobot(int, std::string, int);
    Autobot(int, std::string);
    void openFire() override;
    void transform() override;
    void ulta() override;
    bool autobotAtack();
    void setNumber(int);
    int getNumber();
    void setAutobotName(std::string);
    std::string getAutobotName();
private:
    int _number;
    std::string _autobotName;
};

std::ostream& operator<<(std::ostream&, Autobot&);

#endif