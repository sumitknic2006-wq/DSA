#include<iostream>
using namespace std;
int main(){

    // Example 1
    
    // int arr[5] = {8, 3, 10, 1, 6};

    // int first = arr[0];

    // for(int i = 0;i<5;i++){

    //     if(arr[i]>first){
    //         first = arr[i];
    //     }
    // }

    // int second = arr[0];
    // for(int i = 0;i<5;i++){

    //     if(arr[i]>second && first>arr[i]){
    //         second = arr[i];
    //     }
    // }
    
    // cout<<second;




    // Example 2


    int arr[4] = {5,5,5,5};

    int first = arr[0];

    for(int i = 0;i<4;i++){

        if(arr[i]>first){
            first = arr[i];
        }
    }

    int second = arr[0];
    for(int i = 0;i<5;i++){

        if(arr[i]>second && first>arr[i]){
            second = arr[i];
        }
    }
    cout<<second;


}