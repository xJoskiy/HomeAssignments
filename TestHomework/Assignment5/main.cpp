/*Maksim Lazarev st128707@student.spbu.ru*/

#include "autobot.h"
#include "decepticon.h"
#include "terminator.h"
#include <vector>

int main()
{
    Transformer tran;
    Decepticon dec(0, "dec");
    Autobot aut(0, "aut");

    tran.transform();
    tran.openFire();
    tran.ulta();

    dec.transform();
    dec.openFire();
    dec.ulta();

    aut.transform();
    aut.openFire();
    aut.ulta();

    Transformer* ptr = &tran;
    ptr->transform();
    ptr->openFire();
    ptr->ulta();

    ptr = &dec;
    ptr->transform();
    ptr->openFire();
    ptr->ulta();

    ptr = &aut;
    ptr->transform();
    ptr->openFire();
    ptr->ulta();


    std::vector<Transformer*> ptrs;
    for (int i = 0; i < 3; i++)
    {
        ptrs.push_back(&tran);
        ptrs.push_back(&dec);
        ptrs.push_back(&aut);
    }
    for (int i = 0; i < 9; i++)
    {
        if (i < 3)
        {
            ptrs[i]->transform();
        }
        else if (3 <= i < 6)
        {
            ptrs[i]->openFire();
        }
        else
        {
            ptrs[i]->ulta();
        }
    }
}