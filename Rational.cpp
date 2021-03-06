#include "Rational.h"
#include <bits/stdc++.h>

void Rational::simplify()
{
    int x, y, r;

    x = mNumerator;
    y = mDenominator;

    while (y) //algoritmul lui Euclid
    {
        r = x % y;
        x = y;
        y = r;
    }

    mNumerator = mNumerator / x;
    mDenominator = mDenominator / x;
}

Rational::Rational(int num , int denom)
{
    mNumerator = num;
    mDenominator = denom;

    simplify();

    if (mDenominator == 0)
        throw std::runtime_error("The denominator cannot be 0.");
}

Rational::Rational(Rational &number)
{
    mNumerator = number.mNumerator;
    mDenominator = number.mDenominator;
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

int Rational::getNumerator()
{
    return mNumerator;
}

int Rational::getDenominator()
{
    return mDenominator;
}



Rational& operator+=(Rational &number1, const Rational &number2)
{
    number1.mNumerator = number1.mNumerator * number2.mDenominator + number1.mDenominator * number2.mNumerator;
    number1.mDenominator = number1.mDenominator * number2.mDenominator;
    number1.simplify();
    return number1;
}

Rational& operator+=(Rational &number1, const int number2)
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

Rational& operator-=(Rational &number1, const int number2)
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

Rational& operator*=(Rational &number1, const int number2)
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

Rational& operator/=(Rational &number1, const int number2)
{
    number1.mDenominator = number1.mDenominator * number2;
    number1.simplify();
    return number1;
}

Rational operator+(const Rational &number)
{
    return number;
}

Rational operator-(Rational &number)
{
    number.mNumerator = (-1)*number.mNumerator;
    return number;
}

Rational operator+(const Rational &number1, const Rational &number2)
{
    Rational result;
    result.mNumerator = number1.mNumerator * number2.mDenominator + number2.mNumerator * number1.mDenominator;
    result.mDenominator = number1.mDenominator * number2.mDenominator;
    result.simplify();
    return result;
}

Rational operator+(const int number1, const Rational &number2)
{
    Rational result;
    result.mNumerator = number1 * number2.mDenominator + number2.mNumerator;
    result.mDenominator = number2.mDenominator;
    result.simplify();
    return result;
}

Rational operator+(const Rational &number1, const int number2)
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

Rational operator-(const int number1, const Rational &number2)
{
    Rational result;
    result.mNumerator = number1 * number2.mDenominator - number2.mNumerator;
    result.mDenominator = number2.mDenominator;
    result.simplify();
    return result;
}

Rational operator-(const Rational &number1, const int number2)
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

Rational operator*(const int number1, const Rational &number2)
{
    Rational result;
    result.mNumerator = number1 * number2.mNumerator;
    result.mDenominator = number2.mDenominator;
    result.simplify();
    return result;
}

Rational operator*(const Rational &number1, const int number2)
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

Rational operator/(const int number1, const Rational &number2)
{
    Rational result;
    result.mNumerator = number2.mDenominator * number1;
    result.mDenominator = number2.mNumerator;
    result.simplify();
    return result;
}

Rational operator/(const Rational &number1, const int number2)
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
        convert <<"The denominator cannot be 0.";

    fraction = convert.str();

    return fraction;

}

bool operator==(Rational &number1, Rational &number2)
{
    number1.simplify(); number2.simplify();

    if (number1.mNumerator == number2.mNumerator && number1.mDenominator == number2.mDenominator)
        return true;
    return false;

    /*
    alta metoda, cu parametrii cosnt si fara apelarea functiei simplify:
    return number1.mNumerator * number2.mDenominator - number2.mNumerator * number1.mDenominator == 0
    */
}

bool operator==(const int number1, Rational &number2)
{
    number2.simplify();
    if (number1 == number2.mNumerator && 1 == number2.mDenominator)
        return true;
    return false;
}

bool operator==(Rational &number1, const int number2)
{
    number1.simplify();
    if (number2 == number1.mNumerator && 1 == number1.mDenominator)
        return true;
    return false;
}

bool operator!=(const Rational &number1, const Rational &number2)
{
    //am folost si cealalta metoda, descrisa mai sus la operatorul ==(Rational, Rational)
    return number1.mNumerator * number2.mDenominator - number2.mNumerator * number1.mDenominator;
}

bool operator!=(const int number1, const Rational &number2)
{
    return number1 * number2.mDenominator - number2.mNumerator;
}

bool operator!=(const Rational &number1, const int number2)
{
    return number1.mNumerator - number2 * number1.mDenominator;
}

bool operator<(const Rational &number1, const Rational &number2)
{
    return number1.mNumerator * number2.mDenominator  < number2.mNumerator * number1.mDenominator;
}

bool operator<(const int number1, const Rational &number2)
{
    return number1 * number2.mDenominator < number2.mNumerator;
}

bool operator<(const Rational &number1, const int number2)
{
    return number1.mNumerator < number2 * number1.mDenominator;
}

bool operator<=(const Rational &number1, const Rational &number2)
{
    return number1.mNumerator * number2.mDenominator  <= number2.mNumerator * number1.mDenominator;
}

bool operator<=(const int number1, const Rational &number2)
{
    return number1 * number2.mDenominator <= number2.mNumerator;
}

bool operator<=(const Rational &number1, const int number2)
{
    return number1.mNumerator <= number2 * number1.mDenominator;
}

bool operator>(const Rational &number1, const Rational &number2)
{
    return number1.mNumerator * number2.mDenominator  > number2.mNumerator * number1.mDenominator;
}

bool operator>(const int number1, const Rational &number2)
{
    return number1 * number2.mDenominator > number2.mNumerator;
}

bool operator>(const Rational &number1, const int number2)
{
    return number1.mNumerator > number2 * number1.mDenominator;
}

bool operator>=(const Rational &number1, const Rational &number2)
{
    return number1.mNumerator * number2.mDenominator  >= number2.mNumerator * number1.mDenominator;
}

bool operator>=(const int number1, const Rational &number2)
{
    return number1 * number2.mDenominator >= number2.mNumerator;
}

bool operator>=(const Rational &number1, const int number2)
{
    return number1.mNumerator >= number2 * number1.mDenominator;
}

Rational::operator double() const
{
    return (double) mNumerator / mDenominator;
}

Rational::operator int() const
{
    return (int) mNumerator / mDenominator;
}

Rational::operator std::string() const
{
    return toString(*this);
}

std::istream & operator>> (std::istream &read, Rational &number)
{
    char slash;

    read >> number.mNumerator >> slash >> number.mDenominator;
    return read;
}

std::ostream & operator<< (std::ostream &write, Rational &number)
{
    if (number.mDenominator < 0)
    {
        number.mDenominator *= (-1);
        number.mNumerator *= (-1);
    }

    if (number.mDenominator == 1)
        write << number.mNumerator;
    else
        write << number.mNumerator << '/' << number.mDenominator;

    return write;
}
