#include<iostream>
using namespace std;

int fact(int n)
{
    // Base case
    if(n == 0)
    return 1;

    return n*fact(n-1);
}

int main()
{
    // Factorial of a number n

    int n;
    n = 100;
    if(n<0)
    {
        cout<<"Factorial is not possible\n";
        return 0;
    }

    cout<<fact(n);
}