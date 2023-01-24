#include <iostream>

using namespace std;


long factorial(int n)
{
    long answer=1;
    for (int curr=1; curr<=n; curr++)
        answer = answer * curr;
    return answer;
}
int main(int argc, char *argv[])
{
    cout << "Enter a positive number: ";
    int number;
    cin >> number;

    cout << "number! = " << factorial(number) << endl;

    return 0;
}
