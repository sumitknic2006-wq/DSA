#include<iostream>
using namespace std;

// /**
//  * 1: Find the Maximum element in a given array of size N.
//  */

// int MaxElement(int arr[] , int index , int n)
// {
//     if(index == n-1)
//     {
//         return arr[index];
//     }

//     return max(arr[index] , MaxElement(arr,index+1,n));
// }

// int main()
// {
//     int arr[5] = {5,8,9,2,4};

//     cout<<MaxElement(arr, 0 , 5);

// }



/**
 * 2: Find the Product of all elements in a given array of size N.
 */

int product(int arr[] , int index , int n)
{
    if(index == n){
        return 1;
    }

    return arr[index] * product(arr,index+1,n);
}

int main()
{
    int arr[] = {3,1,4,9,4};

    cout<<product(arr, 0 , 5);
}


// /**
//  * 3: Find the Number of even elements in a given array of size N.
//  */

// void evenElement(int arr[],int index,int n){

//     if(index == n){
//         return;
//     }

//     if(arr[index]%2 == 0){
//         cout<<arr[index]<<" ";
//     }

//     evenElement(arr,index+1,n);


// }

// int main(){

//     int arr[] = {3,1,4,9,2};

//     evenElement(arr,0,5);
// }