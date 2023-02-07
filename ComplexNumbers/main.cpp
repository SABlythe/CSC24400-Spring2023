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
    //prod = myNum*other+sum;
    prod.print();

    return 0;
}
