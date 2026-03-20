#include<iostream>
using namespace std;
int main(){
    // 1: Use Bubble Sort Algorithm to sort the array of integers in decreasing order.
    int arr[5] = {5,8,2,4,9};
    for(int i=0;i<4;i++){
        bool swapped = 0;
        for(int j=0;j<4;j++){
            if(arr[j]<arr[j+1]){
                swapped = 1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped==0)
        break;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }


}