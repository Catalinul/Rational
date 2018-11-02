#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
    Rational num(8,3),num2(1,3);

    cout<<num.getNumerator()<<"/"<<num.getDenominator()<<'\n';


    cout<<num2.getNumerator()<<"/"<<num2.getDenominator()<<'\n';

    num /= num2;

    cout<<num.getNumerator()<<"/"<<num.getDenominator()<<'\n';


    return 0;
}
