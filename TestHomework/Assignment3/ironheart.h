/*Maksim Lazarev st128707@student.spbu.ru*/

#ifndef IRONHEART_H
#define IRONHEART_H

class IronHeart {
public:
    IronHeart(unsigned int);
    unsigned int getHealpoint();
    void setHealpoint(unsigned int);
    ~IronHeart();
private:
    unsigned int _healPoint;
};

#endif