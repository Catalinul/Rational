#include "Rational.h"
#include <iostream>

using namespace std;

Rational::Rational(int num, int denom)
{
    mNumerator = num;
    mDenominator = denom;
}

Rational::Rational(Rational &number)
{
    mNumerator = number.mNumerator;
    mDenominator = number.mDenominator;
}

void Rational::simplify()
{  //algoritmul lui Euclid
    int x, y, r;

    x = mNumerator;
    y = mDenominator;

    while (y)
    {
        r = x % y;
        x = y;
        y = r;
    }

    mNumerator = mNumerator / x;
    mDenominator = mDenominator / x;
}

void Rational::setBoth(Rational number)
{
    number.simplify();

    mNumerator = number.mNumerator;
    mDenominator = number.mDenominator;

}

void Rational::setNumerator(int numerator)
{
    mNumerator = numerator;
    simplify();
}

void Rational::setDenominator(int denominator)
{
    mDenominator = denominator;
    simplify();
}


Rational& operator+=(Rational &number1, const Rational &number2)
{
    number1.mNumerator = number1.mNumerator * number2.mDenominator + number1.mDenominator * number2.mNumerator;
    number1.mDenominator = number1.mDenominator * number2.mDenominator;
    number1.simplify();
    return number1;
}

Rational& operator+=(Rational &number1, const int &number2)
{
    number1.mNumerator = number1.mNumerator + number1.mDenominator * number2;
    number1.simplify();
    return number1;
}

Rational& operator-=(Rational &number1, const Rational &number2)
{
    number1.mNumerator = number1.mNumerator * number2.mDenominator - number1.mDenominator * number2.mNumerator;
    number1.mDenominator = number1.mDenominator * number2.mDenominator;
    number1.simplify();
    return number1;
}

Rational& operator-=(Rational &number1, const int &number2)
{
    number1.mNumerator = number1.mNumerator - number1.mDenominator * number2;
    number1.simplify();
    return number1;
}

Rational& operator*=(Rational &number1, const Rational &number2)
{
    number1.mNumerator = number1.mNumerator * number2.mNumerator;
    number1.mDenominator = number1.mDenominator * number2.mDenominator;
    number1.simplify();
    return number1;
}

Rational& operator*=(Rational &number1, const int &number2)
{
    number1.mNumerator = number1.mNumerator * number2;
    number1.simplify();
    return number1;
}

Rational& operator/=(Rational &number1, const Rational &number2)
{
    number1.mNumerator = number1.mNumerator * number2.mDenominator;
    number1.mDenominator = number1.mDenominator * number2.mNumerator;
    number1.simplify();
    return number1;
}

Rational& operator/=(Rational &number1, const int &number2)
{
    number1.mDenominator = number1.mDenominator * number2;
    number1.simplify();
    return number1;
}

