#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Initial approach
    // int count0 = 0;
    // int count1 = 0;
    // for(int i=0;i<n;i++){
    //     if(arr[i] == 0)
    //     count0++;
    //     else
    //     count1++;
    // }
    // for(int i=0;i<count0;i++)
    // arr[i]=0;
    // for(int i=count0;i<n;i++)
    // arr[i]=1;
    // for(int i=0;i<n;i++)
    // cout<<arr[i]<<" ";

    // or

    // Two Pointer approach
    // int start = 0,end=n-1;
    // while(start<end){
    //     if(arr[start] == 0)
    //     start++;
    //     else{
    //         if(arr[end] == 0){
    //             swap(arr[start],arr[end]);
    //             start++, end--;
    //         }
    //         else end--;
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
}
