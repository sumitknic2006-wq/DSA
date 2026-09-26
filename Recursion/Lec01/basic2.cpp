#include<iostream>
using namespace std;

void print(int n)
{
    // Base case

    // if(n == 1)
    // {
    //     cout<<1<<endl;
    //     return ;
    // }
    // cout<<n<<endl;
    // print(n-1);

    if(n ==2)
    {
        cout<<2<<endl;
        return;
    }
    cout<<n<<endl;
    print(n-2);

}
int main()
{

    // print 1 to n
    // int n = 5;
    // for(int i=n;i<10;i--)
    // cout<<i<<endl;

    // print(n);

    // even number n to 1
    int n = 10;
    print(n);
}