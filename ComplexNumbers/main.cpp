#include <iostream>

#include "Complex.hpp"   // NEVER include Complex.cpp

using namespace std;

int main (int argc, char *argv[])
{
    Complex myNum(3 , 9);
    Complex other(3, -9);

    myNum.print();
    cout << endl;
    other.print();
    cout << endl;

    Complex sum;

    //sum = myNum + other;
    //sum = myNum.add(other);
    //sum = myNum.operator+(other);
    sum = myNum + other;

    sum.print();
    cout << endl;

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

    return 0;
}
