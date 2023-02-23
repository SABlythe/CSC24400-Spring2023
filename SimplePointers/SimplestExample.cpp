#include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
    int value = 7;
    int *myPointer;
    myPointer = &value;
    cout << value << endl;
    cout << myPointer << endl;

    *myPointer = 34;

    cout << *myPointer << endl;
    cout << value << endl;

    return 0;
}
