#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
    Rational num(1,2),num2(4,3),num3;

    cout<<num.getNumerator()<<"/"<<num.getDenominator()<<'\n';

    cout<<num2.getNumerator()<<"/"<<num2.getDenominator()<<'\n';

    cin>>num3;

    cout<<num3;


    return 0;
}
