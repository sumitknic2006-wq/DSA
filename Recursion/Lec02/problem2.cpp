#include<iostream>
using namespace std;

// void printeven(int num , int N) // two argument
// {
//     if(num>N){
//         return;
//     }

//     cout<<num<<" ";
//     printeven(num+2,N);
// }


// int main(){
//     // print even number from 1 to N;
//     int N;
//     cin>>N;

//     printeven(2,N);
// }


void printeven(int N) // one argument
{
    if(N == 2){

        cout<<N<<" ";
        return;
    }

    printeven(N-2);
    cout<<N<<" ";
}


int main(){
    // print even number from 1 to N;
    int N;
    cin>>N;

    if(N%2 == 1)
    N--;
    printeven(N);
}