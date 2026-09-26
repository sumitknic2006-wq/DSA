#include<iostream>
using namespace std;

// /*1: Print “Coder Army” 10 times using recursion */
// void print(int num)
// {
//     if(num == 0){
//         return;
//     }

//     cout<<"Hello Coder Army"<<endl;
//     print(num-1);
// }

// int main()
// {
//     int n = 10;
//     print(n);
// }


// /* 2: Print all odd number from n to 1 using recursion */

// 2 -- > Arguments
// void print(int num , int N)
// {
//     if(num == N){
//         cout<<num;
//         return;
//     }

//     cout<<N<<" ";
//     print(1,N-2);
// }

// int main() 
// {
//     int N;
//     cin>>N;
//     if(N%2 == 0){
//         N--;
//     }
//     print(1,N);
// }


// Or --> 1 Arguments

// void print(int N)
// {
//     if(1 == N){
//         cout<<1;
//         return;
//     }

//     cout<<N<<" ";
//     print(N-2);
// }

// int main() 
// {
//     int N;
//     cin>>N;
//     if(N%2 == 0){
//         N--;
//     }
//     print(N);
// }



// /**
//  * 3: Print all numbers from 1 to n using recursion. 
//  */

// void print(int num, int Num)
// {
//     if(num>Num){
//         return;
//     }
//     cout<<num<<" ";
//     print(num+1,Num);
// }

// int main(){
//     int N;
//     cin>>N;

//     print(1,N);
// }

// Or --> 1 argument
void print(int num)
{
    if(num == 1){
        cout<<num<<" ";
        return;
    }

    print(num-1);
    cout<<num<<" ";
}

int main(){
    int N;
    cin>>N;

    print(N);
}
