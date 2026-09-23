#include<iostream>
using namespace std;

void fun(int **p1)
{
    *p1 = *p1+1;
}

int main()
{
    // int n = 10;
    // int *p = &n; // singlre pointet
    // int **p2 = &p; // Double Pointer
    // int ***p3 = &p2; // Triple pointer
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<p2<<endl;
    // cout<<&p2<<endl;
    // cout<<p3<<endl;
    
    // // Value ko modify karna ho , jo n mein rahki hai..

    // ***p3 = ***p3+10;
    // cout<<n<<endl;


    int n = 10;
    int *p = &n; // singlre pointet
    int **p2 = &p; // Double Pointer

    cout<<p<<endl;
    fun(p2);
    cout<<p<<endl;
}