#include<iostream>
using namespace std;

void fun3(int n)
{
    // Base Case
    if(n == 0)
    {
        cout<<"Happy Birthday\n";
        return;
    }

    cout<<n<<" days left for birthday\n";
    fun3(n-1);
}

int main() 
{
    int n = 3;

    // // Iterative approach
    // for(int i = n;i>0;i--)
    // {
    //     cout<<i<<" days left for birthday\n";
    // }

    // cout<<"Happy Birthday\n";

    fun3(5);
}

