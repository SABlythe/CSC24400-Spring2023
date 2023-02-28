#include <iostream>
using namespace std;

#include "PFA.hpp"

int main(int argc, char *argv[])
{
    PFA myArr;

    myArr.addElement("Trouble");
    myArr.addElement("with");
    myArr.addElement("Tribbles");

    cout << myArr << endl;

    return 0;
}
