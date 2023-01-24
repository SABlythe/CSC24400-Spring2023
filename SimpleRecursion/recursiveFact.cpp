#include <iostream>

using namespace std;


long int factorial(int n)
{
    if (n==0)
        return 1;
    else
        return n * factorial(n-1);

}
int main(int argc, char *argv[])
{
    cout << "Enter a positive number: ";
    int number;
    cin >> number;

    cout << "number! = " << factorial(number) << endl;

    return 0;
}
