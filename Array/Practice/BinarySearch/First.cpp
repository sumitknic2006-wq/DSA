#include<iostream>
using namespace std;
// 1: An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;
int BinarySearch(int arr[], int n, int key){
    int start=0, end=n-1, mid;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]>key)
        start = mid+1;
        else
        end = mid-1; 
    }
    return -1;
}
int main(){
    int arr[100];
    int n;
    cout<<"Enter the number of element of array:";
    cin>>n;
    cout<<"Enter of element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enetr the key:";
    cin>>key;
    cout<<BinarySearch(arr,n,key)<<endl;
    return 0;
}
