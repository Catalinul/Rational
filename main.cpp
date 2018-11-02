#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
    Rational num(2,5),num2(3,4),num3;

    cout<<num.getNumerator()<<"/"<<num.getDenominator()<<'\n';


    cout<<num2.getNumerator()<<"/"<<num2.getDenominator()<<'\n';

    num3 = num + num2;

    cout<<num3.getNumerator()<<"/"<<num3.getDenominator()<<'\n';


    return 0;
}
