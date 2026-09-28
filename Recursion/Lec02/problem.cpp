#include<iostream>
using namespace std;

// void print(int num, int N) // two arguments
// {
//     // Base Case

//     if(num == N)
//     {
//         cout<<num<<endl;
//         return;
//     }

//     cout<<num<<endl;
//     print(num+1,N);
// }

// int main() 
// {
//     // print number from 1 to N
//     int N;
//     cin>>N;
//     print(1,N);
// }


void print(int N) // one arguments se print
{
    // Base Case

    if(N == 1)
    {
        cout<<N<<endl;
        return;
    }

    print(N-1);
    cout<<N<<endl;
    
}

int main() 
{
    // print number from 1 to N
    int N;
    cin>>N;
    print(N);
}