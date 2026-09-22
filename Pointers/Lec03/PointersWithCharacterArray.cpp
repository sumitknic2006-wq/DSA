#include<iostream>
using namespace std;
int main()
{
    char arr[5] = "1234";
    char *ptr = arr;

    // Value print
    cout<<arr<<endl;
    cout<<ptr<<endl;

    // Address Print
    cout<<(void*)arr<<endl; // cout<<static_cast<void*(arr)<<endl;
    cout<<(void*)ptr<<endl;

    // Random value print
    char name = 'a';
    cout<<&name<<endl;

    // address print
    char *ptr1 = &name;
    cout<<(void*)&name<<endl;
    cout<<(void*)ptr1;
}