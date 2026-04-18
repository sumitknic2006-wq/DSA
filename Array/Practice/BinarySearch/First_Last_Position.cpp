#include<iostream>
using namespace std;
int first_last(int arr[], int n, int target  ){
    int start=0, end=n-1, mid, first=-1, last=-1;
//    find first
    while(start<=end){
        mid = start+(end-start)/2;
        if(arr[mid] == target){
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]<target)
        start=mid+1;
        else
        end=mid-1;
    }
    return first;

    // find last
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid] == target)
        {
            last = mid;
            start=mid+1;
        }
        else if(arr[mid]<target)
        start=mid+1;
        else
        end=mid-1;
    }
    return last;
}
    int main(){
    int n;
    cout<<"enter the element:";
    cin>>n;
    int arr[n];
    int target;
    cout<<"enter the target:";
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<first_last(arr,n,target);
}



