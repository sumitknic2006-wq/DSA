#include<iostream>
using namespace std;
int main(){
    vector<int>ans;
    int n;
    cout<<"Enter of the element:";
    cin>>n;
    int target;
    cout<<"Enter target:";
    cin>>target;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Initial approach

    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]+arr[j] == target){
    //             ans.push_back(i+1);
    //             ans.push_back(j+1); 
    //         }
    //     }
    // }
    // for(int x:ans){
    //     cout<<x<<" ";
    // }

    // Two Pointer Method
    int start=0,end=n-1;
    while(start<end){
        if(arr[start]+arr[end] == target){
            ans.push_back(start+1);
            ans.push_back(end+1);
            break;
        }
        else if(arr[start]+arr[end]<target)
        start++;
        else
        end--;
    }
    for(int x:ans){
        cout<<x<<" ";   
        }

}