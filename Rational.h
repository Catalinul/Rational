#ifndef RATIONAL_H_INCLUDED
#define RATIONAL_H_INCLUDED

#include <string>


class Rational
{
public:

    //constructori si deconstructori
    Rational(int num = 0, int denom = 1 );
    Rational(Rational &number);

    //getteri
    int getNumerator();
    int getDenominator();

    //setteri
    void setNumerator(int numerator);
    void setDenominator(int denominator);
    void setBoth(Rational number);

    //supraincarcarea operatorilor compusi de atribuire
    friend Rational& operator+=(Rational &number1, const Rational &number2);
    friend Rational& operator+=(Rational &number1, const int number2);
    friend Rational& operator-=(Rational &number1, const Rational &number2);
    friend Rational& operator-=(Rational &number1, const int number2);
    friend Rational& operator*=(Rational &number1, const Rational &number2);
    friend Rational& operator*=(Rational &number1, const int number2);
    friend Rational& operator/=(Rational &number1, const Rational &number2);
    friend Rational& operator/=(Rational &number1, const int number2);

    //supraincarcarea operatorilor artimetici unari
    friend Rational operator+(const Rational &number);
    friend Rational operator-(Rational &number);

    //supraincarcarea operatorilor artimetici binari
    friend Rational operator+(const Rational &number1, const Rational &number2);
    friend Rational operator+(const int number1, const Rational &number2);
    friend Rational operator+(const Rational &number1, const int number2);
    friend Rational operator-(const Rational &number1, const Rational &number2);
    friend Rational operator-(const int number1, const Rational &number2);
    friend Rational operator-(const Rational &number1, const int number2);
    friend Rational operator*(const Rational &number1, const Rational &number2);
    friend Rational operator*(const int number1, const Rational &number2);
    friend Rational operator*(const Rational &number1, const int number2);
    friend Rational operator/(const Rational &number1, const Rational &number2);
    friend Rational operator/(const int number1, const Rational &number2);
    friend Rational operator/(const Rational &number1, const int number2);
    friend Rational operator^(const Rational &number1, const int pow);

    //metode publice
    friend std::string toString(const Rational &number);

    //supraincarcarea operatorilor relationali
    friend bool operator==(Rational &number1, Rational &number2);
    friend bool operator==(const int number1, Rational &number2);
    friend bool operator==(Rational &number1, const int number2);
    friend bool operator!=(const Rational &number1, const Rational &number2);
    friend bool operator!=(const int number1, const Rational &number2);
    friend bool operator!=(const Rational &number1, const int number2);
    friend bool operator<(const Rational &number1, const Rational &number2);
    friend bool operator<(const int number1, const Rational &number2);
    friend bool operator<(const Rational &number1, const int number2);
    friend bool operator<=(const Rational &number1, const Rational &number2);
    friend bool operator<=(const int number1, const Rational &number2);
    friend bool operator<=(const Rational &number1, const int number2);
    friend bool operator>(const Rational &number1, const Rational &number2);
    friend bool operator>(const int number1, const Rational &number2);
    friend bool operator>(const Rational &number1, const int number2);
    friend bool operator>=(const Rational &number1, const Rational &number2);
    friend bool operator>=(const int number1, const Rational &number2);
    friend bool operator>=(const Rational &number1, const int number2);

    //supraincarcarea operatorilor de conversie
    operator double() const;
    operator int() const;
    operator std::string() const;

    //supraincarcarea operatorilor de citire si de scriere
    friend std::istream & operator>> (std::istream &read, Rational &number);
    friend std::ostream & operator<< (std::ostream &write, Rational &number);

private:

    void simplify();
    int mNumerator, mDenominator;

};

#endif // RATIONAL_H_INCLUDED
