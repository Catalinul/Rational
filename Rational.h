#ifndef RATIONAL_H_INCLUDED
#define RATIONAL_H_INCLUDED

#include <string>


class Rational
{
private:

    int mNumerator, mDenominator;
    void simplify();

public:

    int getNumerator(){ return mNumerator; }
    int getDenominator(){ return mDenominator; }

    void setNumerator(int);
    void setDenominator(int);
    void setBoth(Rational);



    Rational(int num = 0, int denom = 1); // constructor parametrizat cu valori implciite
    Rational(Rational &); // constructor de copiere

    //supraincarcarea operatorilor compusi de atribuire
    friend Rational& operator+=(Rational &, const Rational &);
    friend Rational& operator+=(Rational &, const int &);
    friend Rational& operator-=(Rational &, const Rational &);
    friend Rational& operator-=(Rational &, const int &);
    friend Rational& operator*=(Rational &, const Rational &);
    friend Rational& operator*=(Rational &, const int &);
    friend Rational& operator/=(Rational &, const Rational &);
    friend Rational& operator/=(Rational &, const int &);

    //supraincarcarea operatorilor artimetici unari
    friend Rational operator+(const Rational &);
    friend Rational operator-(const Rational &);

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
};

#endif // RATIONAL_H_INCLUDED
