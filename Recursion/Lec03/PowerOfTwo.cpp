#include<iostream>
using namespace std;

int pow(int num, int n)
{
    // base
    if(n == 0)
    return 1;
    if(n==1)
    return num;

    return num*pow(num,n-1);
}

int main()
{
    // pow of 2 , n

    int n = 0;
    cout<<pow(2,n);
}