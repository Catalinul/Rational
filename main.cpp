#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
    Rational num(1,2),num2(2,1),num3;

    cout<<num.getNumerator()<<"/"<<num.getDenominator()<<'\n';

    cout<<num2.getNumerator()<<"/"<<num2.getDenominator()<<'\n';

    cout<< (num > 2);

    return 0;
}
