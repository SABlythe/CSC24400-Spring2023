#include <iostream>

#include "Complex.hpp"   // NEVER include Complex.cpp

using namespace std;

int main (int argc, char *argv[])
{
    Complex myNum(3 , 9);
    Complex other(3, -9);

    //myNum.print();
    //cout << endl;
    cout << "MyNum =" << myNum << endl;
    //other.print();
    //cout << endl;
    cout << "other =" << other << endl;
    Complex sum;

    //sum = myNum + other;
    //sum = myNum.add(other);
    //sum = myNum.operator+(other);
    sum = myNum + other;

    sum.print();
    cout << endl;
    cout << "MyNum =" << myNum << endl;
    cout << "other =" << other << endl;

    Complex prod;

    // we'll fix this in class next time!
    prod = myNum*other;
    prod.print();

    cout << endl << endl;
    Complex scalarMult = myNum * 5;
    scalarMult.print();



    cout << "The complex conjugate of ";
    myNum.print();
    cout << " is ";

    Complex conj = !myNum;
    conj.print();

    Complex division = myNum / other;
    division.print();

    // would like to be able to ....
    cout << "division is " << division << endl;

    cout << "real part of division is "
        << division.real() << endl;
    cout << "imaginary part of division is "
        << division.imaginary() << endl;

    division.imaginary() = 42;
    cout << "division is " << division << endl;

    /*
    double bad= division.badIdea();
    cout << endl << bad << endl;
*/
    return 0;
}
