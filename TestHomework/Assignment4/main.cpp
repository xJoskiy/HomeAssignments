/*Maksim Lazarev st128707@student.spbu.ru*/

#include "autobot.h"
#include "decepticon.h"
#include "terminator.h"

int main()
{
    Transformer tr1(34, 0 ,"tr1");
    Transformer tr2(12, 12, "tr2", 1, 1);
    std::cout << tr2;
    if (tr1 > tr2)
    {
        std::cout << tr1.getName() << ' ' << "stronger" << '\n';
    }
}