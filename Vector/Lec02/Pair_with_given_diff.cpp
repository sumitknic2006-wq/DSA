#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>ans;
    int n;
    cout<<"enter of the element:";
    cin>>n;
    int target;
    cout<<"enter the target:";
    cin>>target;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // sort(arr.begin(),arr.end());
    int start=0, end=1;
    while(end<n){
        if(arr[end]-arr[start] == target){
            ans.push_back(start);
            ans.push_back(end);
            break;
        }
        else if(arr[end]-arr[start]<target){
            end++;
        }
        else{
            start++;
        }
    }
    for(int x:ans){
        cout<<x<<" ";   
    }
}