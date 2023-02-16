#include "Complex.hpp"

#include <iostream>

using namespace std;

Complex::Complex()
{
    _real = 0;
    _imaginary = 0;
}

Complex::Complex(double realPart, double imaginaryPart)
{
    _real = realPart;
    _imaginary = imaginaryPart;
}

Complex
//Complex::add(Complex rhs)
Complex::operator+(const Complex &rhs) const
{
    Complex answer;

    answer._real = _real + rhs._real;
    answer._imaginary = _imaginary + rhs._imaginary;

    //rhs._imaginary=764.341;

    return answer;
}

Complex
//Complex::add(Complex rhs)
Complex::operator*(Complex rhs)
{
    Complex answer;

    answer._real = _real * rhs._real - _imaginary * rhs._imaginary;
    answer._imaginary = _real * rhs._imaginary + rhs._real*_imaginary;

    return answer;
}

Complex
Complex::operator*(double foo)
{
    Complex bar;

    bar._real = foo * _real;
    bar._imaginary = foo * _imaginary;

    return bar;
}

Complex
Complex::operator/(Complex denom)
{
    Complex answer;

    Complex denomConj = !denom;

    answer = (*this) * denomConj;

    Complex answerDenom = denom * denomConj;

    double multiplier = 1.0 / answerDenom._real;

    //answer = answer * multiplier;
    answer = multiplier * answer;

    return answer;
}

Complex Complex::operator!()
{
    Complex answer;
    answer._real = _real;
    answer._imaginary = - _imaginary;
    return answer;
}

void
Complex::print()
{
    cout << _real ;

    if (_imaginary != 0)
        cout << "+" <<  _imaginary << "i" << endl;
}

Complex operator*(double foo, Complex rhs)
{
    Complex bar;

    bar._real = foo * rhs._real;
    bar._imaginary = foo * rhs._imaginary;

    return bar;
}

std::ostream & operator<< (std::ostream &os, Complex rhs )
{
    os << rhs._real ;

    if (rhs._imaginary != 0)
        os << "+" <<  rhs._imaginary << "i" << endl;

    return os;
}
