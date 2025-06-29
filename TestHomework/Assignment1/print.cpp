/*Maksim Lazarev st128707@student.spbu.ru
first tusk*/

#include <iostream>
#include "print.h"

void print(){
    std::string a;
    int* notFreed = new int[5];
    std::cout << "Hello, world!" << std::endl;
    int n = 10;
    while (n--){
        std::cin >> a;
        std::cout << "Hello, " << a << "!" << std::endl;
    }
}

