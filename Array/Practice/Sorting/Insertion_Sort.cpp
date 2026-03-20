#include<iostream>
using namespace std;
int main(){
    // Insertion sorting(Decreasing order)
    // int n;
    // cin>>n;
    // int arr[100];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];  
    // }
    // for(int i=1;i<n;i++){
    //     for(int j=i;j>0;j--){
    //         if(arr[j]>arr[j-1]){
    //             swap(arr[j],arr[j-1]);
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    // 2: Insertion Sort Algorithm to sort the array of integers in increasing order if we start from the last element of the array. Question was explained in the class.
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];  
    }
    for(int i=n-2;i>=0;i--){
        for(int j=i;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}