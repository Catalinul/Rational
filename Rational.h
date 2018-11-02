#ifndef RATIONAL_H_INCLUDED
#define RATIONAL_H_INCLUDED

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
    friend Rational operator^(const Rational &, const int &);
};

#endif // RATIONAL_H_INCLUDED
