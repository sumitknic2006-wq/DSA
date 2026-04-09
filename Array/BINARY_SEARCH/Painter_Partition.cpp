#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of number:";
    cin>>n;
    int k;
    cout<<"Number of painter:";
    cin>>k;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long start=0, end=0, mid, ans;
    for(int i=0;i<n;i++){
        if(start<arr[i])
        start = arr[i];
        end += arr[i];
    }
    while(start<=end)
    {
        mid = start + (end-start)/2;
        long long pages=0, count=0;
        for(int i=0;i<n;i++){
            pages += arr[i];
            if(pages>mid){
                count++;
                pages = arr[i];
            }
        } 
        if(count<=k)
        {
            ans = mid;
            end = mid-1;
        }
        else
        start = mid+1;
    }
    cout<<ans;

}