#include<iostream>
using namespace std;

int main()
{
    // Size of string
    string s = "Sumit";
    int size = 0;

    while(s[size] != '\0')
    {
        size++;
    }

    cout<<size<<" ";
}