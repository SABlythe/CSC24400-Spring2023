#ifndef _COMPLEX_HPP_
#define _COMPLEX_HPP_

#include <iostream>

class Complex
{
private:
    double _real;
    double _imaginary;
public:
    Complex();
    Complex(double realPart, double imaginaryPart);

    // accessor methods
    double real() const {return _real;}

    // modifier methods
    double& imaginary() {return _imaginary;}
    double& real() {return _real;}

    //Complex add(Complex rhs);
    Complex operator+(const Complex &rhs) const;

    // you should probably update these with const's
    //    as for operator+ above ... skipped to save time
    Complex operator*(Complex rhs);
    Complex operator*(double rhs);
    Complex operator/(Complex rhs);

    Complex operator!();


    void print();

    friend Complex operator*(double lhs, Complex rhs);
    friend std::ostream & operator<< (std::ostream &os, Complex rhs );

    //////////////////////////////////////////
    const double& badIdea() {return _imaginary+_real;}
};



#endif
