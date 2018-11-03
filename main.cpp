/***************************************************************************************************
Proiectul 1 - Tema 2
Author: Pirvu Constantin-Catalin
***************************************************************************************************/

#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
    Rational num(5,2),num2(7,3),num3;

    cout<<num.getNumerator()<<"/"<<num.getDenominator()<<'\n';

    cout<<num2.getNumerator()<<"/"<<num2.getDenominator()<<'\n';

    num3 = num + num2;

    cout<<num3;


    return 0;
}
