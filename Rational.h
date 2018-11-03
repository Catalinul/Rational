#ifndef RATIONAL_H_INCLUDED
#define RATIONAL_H_INCLUDED

#include <string>


class Rational
{
public:

    //constructori si deconstructori
    Rational(int num = 0, int denom = 1 );
    Rational(Rational &);

    //getteri
    int getNumerator();
    int getDenominator();

    //setteri
    void setNumerator(int);
    void setDenominator(int);
    void setBoth(Rational);

    //supraincarcarea operatorilor compusi de atribuire
    friend Rational& operator+=(Rational &, const Rational &);
    friend Rational& operator+=(Rational &, const int);
    friend Rational& operator-=(Rational &, const Rational &);
    friend Rational& operator-=(Rational &, const int);
    friend Rational& operator*=(Rational &, const Rational &);
    friend Rational& operator*=(Rational &, const int);
    friend Rational& operator/=(Rational &, const Rational &);
    friend Rational& operator/=(Rational &, const int);

    //supraincarcarea operatorilor artimetici unari
    friend Rational operator+(const Rational &);
    friend Rational operator-(Rational &);

    //supraincarcarea operatorilor artimetici binari
    friend Rational operator+(const Rational &, const Rational &);
    friend Rational operator+(const int &, const Rational &);
    friend Rational operator+(const Rational &, const int &);
    friend Rational operator-(const Rational &, const Rational &);
    friend Rational operator-(const int &, const Rational &);
    friend Rational operator-(const Rational &, const int &);
    friend Rational operator*(const Rational &, const Rational &);
    friend Rational operator*(const int &, const Rational &);
    friend Rational operator*(const Rational &, const int &);
    friend Rational operator/(const Rational &, const Rational &);
    friend Rational operator/(const int &, const Rational &);
    friend Rational operator/(const Rational &, const int &);
    friend Rational operator^(const Rational &, const int);

    //metode publice
    friend std::string toString(const Rational &);

    //supraincarcarea operatorilor relationali
    friend bool operator==(Rational &, Rational &);
    friend bool operator==(const int, Rational &);
    friend bool operator==(Rational &, const int);
    friend bool operator!=(const Rational &, const Rational &);
    friend bool operator!=(const int, const Rational &);
    friend bool operator!=(const Rational &, const int);
    friend bool operator<(const Rational &, const Rational &);
    friend bool operator<(const int, const Rational &);
    friend bool operator<(const Rational &, const int);
    friend bool operator<=(const Rational &, const Rational &);
    friend bool operator<=(const int, const Rational &);
    friend bool operator<=(const Rational &, const int);
    friend bool operator>(const Rational &, const Rational &);
    friend bool operator>(const int, const Rational &);
    friend bool operator>(const Rational &, const int);
    friend bool operator>=(const Rational &, const Rational &);
    friend bool operator>=(const int, const Rational &);
    friend bool operator>=(const Rational &, const int);

    //supraincarcarea operatorilor de conversie
    operator double() const;
    operator int() const;
    operator std::string() const;

    //supraincarcarea operatorilor de citire si de scriere
    friend std::istream & operator>> (std::istream &, Rational &);
    friend std::ostream & operator<< (std::ostream &, Rational &);

private:

    int mNumerator, mDenominator;
    void simplify();
};

#endif // RATIONAL_H_INCLUDED
