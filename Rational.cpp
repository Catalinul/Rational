#include "Rational.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>


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

Rational operator+(const Rational &number)
{
    Rational temp(number.mNumerator, number.mDenominator);
    return temp;
}

Rational operator-(const Rational &number)
{
    Rational temp(-number.mNumerator, number.mDenominator);
    return temp;
}

Rational operator+(const Rational &number1, const Rational &number2)
{
    Rational result;
    result.mNumerator = number1.mNumerator * number2.mDenominator + number2.mNumerator * number1.mDenominator;
    result.mDenominator = number1.mDenominator * number2.mDenominator;
    result.simplify();
    return result;
}

Rational operator+(const int &number1, const Rational &number2)
{
    Rational result;
    result.mNumerator = number1 * number2.mDenominator + number2.mNumerator;
    result.mDenominator = number2.mDenominator;
    result.simplify();
    return result;
}

Rational operator+(const Rational &number1, const int &number2)
{
    Rational result;
    result.mNumerator = number2 * number1.mDenominator + number1.mNumerator;
    result.mDenominator = number1.mDenominator;
    result.simplify();
    return result;
}

Rational operator-(const Rational &number1, const Rational &number2)
{
    Rational result;
    result.mNumerator = number1.mNumerator * number2.mDenominator - number2.mNumerator * number1.mDenominator;
    result.mDenominator = number1.mDenominator * number2.mDenominator;
    result.simplify();
    return result;
}

Rational operator-(const int &number1, const Rational &number2)
{
    Rational result;
    result.mNumerator = number1 * number2.mDenominator - number2.mNumerator;
    result.mDenominator = number2.mDenominator;
    result.simplify();
    return result;
}

Rational operator-(const Rational &number1, const int &number2)
{
    Rational result;
    result.mNumerator = number1.mNumerator - number1.mDenominator * number2;
    result.mDenominator = number1.mDenominator;
    result.simplify();
    return result;
}

Rational operator*(const Rational &number1, const Rational &number2)
{
    Rational result;
    result.mNumerator = number1.mNumerator * number2.mNumerator;
    result.mDenominator = number1.mDenominator * number2.mDenominator;
    result.simplify();
    return result;
}

Rational operator*(const int &number1, const Rational &number2)
{
    Rational result;
    result.mNumerator = number1 * number2.mNumerator;
    result.mDenominator = number2.mDenominator;
    result.simplify();
    return result;
}

Rational operator*(const Rational &number1, const int &number2)
{
    Rational result;
    result.mNumerator = number1.mNumerator * number2;
    result.mDenominator = number1.mDenominator;
    result.simplify();
    return result;
}

Rational operator/(const Rational &number1, const Rational &number2)
{
    Rational result;
    result.mNumerator = number1.mNumerator * number2.mDenominator;
    result.mDenominator = number1.mDenominator * number2.mNumerator;
    result.simplify();
    return result;
}

Rational operator/(const int &number1, const Rational &number2)
{
    Rational result;
    result.mNumerator = number2.mDenominator * number1;
    result.mDenominator = number2.mNumerator;
    result.simplify();
    return result;
}

Rational operator/(const Rational &number1, const int &number2)
{
    Rational result;
    result.mNumerator = number1.mNumerator ;
    result.mDenominator = number1.mDenominator * number2;
    result.simplify();
    return result;
}

Rational operator^(const Rational &number, const int pow)
{
    Rational result;

    result.mNumerator = 1; result.mDenominator = 1;

    if (pow == 0)
        return result;
    else if (pow > 0)
        for (int i = 0; i < pow ; i++)
        {
            result.mNumerator *= number.mNumerator;
            result.mDenominator *= number.mDenominator;
        }
    else
    {
        for (int i = 0; i < abs(pow) ; i++)
        {
            result.mNumerator *= number.mNumerator;
            result.mDenominator *= number.mDenominator;
        }

        std::swap(result.mNumerator,result.mDenominator);
    }

    return result;
}

std::string toString(const Rational &number)
{
    std::string fraction;

    std::stringstream convert;


    if (number.mDenominator == 1)
        convert << number.mNumerator;
    else if (number.mDenominator == -1)
        convert << number.mNumerator * (-1);
    else if (number.mDenominator > 0)
        convert << number.mNumerator << '/' << number.mDenominator;
    else if (number.mDenominator < 0)
        convert << number.mNumerator * (-1) << '/' << abs(number.mDenominator);
    if (number.mDenominator == 0)
        convert <<"Numitorul nu poate fi 0.";

    fraction = convert.str();

    return fraction;

}
