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
Complex::operator+(Complex rhs)
{
    Complex answer;

    answer._real = _real + rhs._real;
    answer._imaginary = _imaginary + rhs._imaginary;

    return answer;
}

void
Complex::print()
{
    cout << _real ;

    if (_imaginary != 0)
        cout << "+" <<  _imaginary << "i" << endl;
}
