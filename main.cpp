/***************************************************************************************************
Proiectul 1 - Tema 2
Author: Pirvu Constantin-Catalin
***************************************************************************************************/

#include <iostream>
#include "Rational.h"


int main()
{
    Rational num(4,3),num2(7,3),num3;


    std::cout<<num.getNumerator()<<"/"<<num.getDenominator()<<'\n';

    std::cout<<num2.getNumerator()<<"/"<<num2.getDenominator()<<'\n';

    num3 = 2 + num2;


    std::cout<<num3;


    return 0;
}
