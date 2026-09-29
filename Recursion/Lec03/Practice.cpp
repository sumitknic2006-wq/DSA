#include<iostream>
using namespace std;

// // 1: Sum of cubes of N natural numbers using Recursion.

// int sumOfCube(int num)
// {
//     if(num == 1){
//         return 1;
//     }
//     return num*num*num + sumOfCube(num-1); 
// }

// int main()
// {
//     int n = 3;
//     cout<<sumOfCube(n);
// }


/**
 * 3: Given a Number N, check whether it is prime or not using Recursion.
 */

bool isPrime(int num){

    if(num<=1)
    {
        return false;
    }
    if(num == 2){
        return true;
    }
    if(num%2 == 0){
        return false;
    }

    for(int i = 3;i*i<=num;i+=2)
    {
        if(num%i == 0){
            return false;
        }
    }
    
    return true;


}
int main()
{
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" this is prime number";
    }
    else{
        cout<<n<<" this is composite";
    }
}