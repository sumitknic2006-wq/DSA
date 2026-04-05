#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>ans;
    int n;
    cout<<"Eneter the element of size:";
    cin>>n;
    int target;
    cout<<"enter of target:";
    cin>>target;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0, end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid] == target){
            ans.push_back(mid);
        }
        // left side sorted
        else if(arr[mid]>=arr[0]){
            if(arr[start]<=target && arr[mid]>=target){
                end = mid-1;
            }
            else
            start = mid+1;
        }
        else{
            if(arr[mid]<=target && arr[end]>=target)
            start = mid+1;
            else
            end = mid-1;
        }
    }
    for(int x:ans){
        cout<<x;
    }
    


}