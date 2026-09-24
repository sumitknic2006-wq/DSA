#include<iostream>
using namespace std;

int main()
{
    // char c[] = "GATE2024";
    // char *p = c;
    // cout<<p+p[3]-p[1];
    // cout<<endl;

    int a = 20;
    int *ptr = &a;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&a;
}