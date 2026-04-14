#include<iostream>
#include<vector>
using namespace std;
int threeSum(vector<int>arr){
    int n = arr.size(), x; 
    // for(int i = 0;i<n-2;i++){
    //     for(int j = i+1;j<n-1;j++){
    //         for(int k = j+1;k<n;k++){
    //             if(arr[i]+arr[j]+arr[k] == x){
    //                 return 1;
    //             }
    //         }
    //     }
    // }
    // return 0;

    
    //binary search 

    // for(int i = 0;i<n-2;i++){
    // for(int j=i+1;j<n-1;j++){
    // int find = x-arr[i]-arr[j];
    // int start = j+1, end = n-1;
    // while(start<end){
    //     int mid = (start+end)/2;
    //     if(arr[mid] == find){
    //         return 1;
    //     }
    //     else if(arr[mid]>find){
    //         end = mid-1;
    //     }
    //     else{
    //         start = mid+1;
    //     }
    // }
    // }
    // }
    // return 0 ;
    

     
    //  Two pointer approach
    for(int i = 0;i<n-2;i++){
    int ans = x-arr[i];
    int start = i+1,end = n-1;
    while(start<end){
    if(arr[start]+arr[end]==ans){
    return 1;
    }
    else if(arr[start]+arr[end]>ans){
    end--;
    }
    else
    start++;
    }
 }
    return 0;
    

    
}
int main(){
int n;
cout<<"enter of the element:";
cin>>n;
int x;
cout<<"x is target of elment:";
cin>>x;
vector<int>v(n);
cout<<"Enter of the element of array:";
for(int i=0;i<n;i++){
    cin>>v[i];
}
cout<<threeSum(v)<<endl;
}


