#include <iostream>

#include "Complex.hpp"   // NEVER include Complex.cpp

using namespace std;

int main (int argc, char *argv[])
{
    Complex myNum(3 , 9);
    Complex other(-6, 7.2);

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

    prod = myNum*other;
    prod.print();

    return 0;
}
