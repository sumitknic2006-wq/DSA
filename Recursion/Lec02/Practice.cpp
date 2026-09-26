#include<iostream>
using namespace std;

/** 
 * 1: Print all odd numbers from 1 to n using recursion. 
 */

// void print(int num)
// {
//     if(num == 1){
//         cout<<num<<" ";
//         return;
//     }
//     print(num-2);
//     cout<<num<<" ";
// }

// int main()
// {
//     int N;
//     cin>>N;
//     if(N%2 == 0)
//     {
//         N--;
//     }

//     print(N);
// }


// Or -->> One arguments
// void print(int num ,int N)
// {
//     if(num > N){
//         return;
//     }

//     cout<<num<<" ";
//     print(num+2,N);
// }

// int main()
// {
//     int N;
//     cin>>N;
//     if(N%2 == 0)
//     {
//         N--;
//     }

//     print(1,N);
// }


/**
 * 2: Print all numbers from 10 to n using recursion, where n will be greater than 10.
 */

// void print(int num, int N)
// {
//     if(num>N){
//         return ;
//     }
//     cout<<num<<" ";
//     print(num+1,N);
// }

// int main()
// {
//     int N;
//     cin>>N;

//     print(11,N);
// }



/**
 * 3: Write a Table program using recursion. Take input number n, and print its table. 
 */

void print(int num, int N)
{
    if(num > 10){
        return;
    }
    cout<<N*num<<endl;
    print(num+1,N);
}

int main()
{
    int N;
    cin>>N;

    print(1,N);
}