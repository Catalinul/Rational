#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
    Rational num(-7,0),num2(3,2),num3;

    cout<<num.getNumerator()<<"/"<<num.getDenominator()<<'\n';

    cout<<num2.getNumerator()<<"/"<<num2.getDenominator()<<'\n';

    cout<<toString(num);

    return 0;
}
