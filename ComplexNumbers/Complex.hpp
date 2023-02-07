#ifndef _COMPLEX_HPP_
#define _COMPLEX_HPP_


class Complex
{
private:
    double _real;
    double _imaginary;
public:
    Complex();
    Complex(double realPart, double imaginaryPart);

    //Complex add(Complex rhs);
    Complex operator+(Complex rhs);

    void print();
};


#endif
