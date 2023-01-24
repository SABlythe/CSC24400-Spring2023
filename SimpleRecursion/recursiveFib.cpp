#include <iostream>

using namespace std;


long int fibo(int n)
{
    if (n<=1)
        return 1;
    else
        return fibo (n-1) + fibo(n-2);

}
int main(int argc, char *argv[])
{
    cout << "Enter a positive number: ";
    int number;
    cin >> number;

    cout << "Nth number in the Fibonacci sequence is = " << fibo(number) << endl;

    return 0;
}
