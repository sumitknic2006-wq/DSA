#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of number:";
    cin>>n;
    int days;
    cout<<"Number of days:";
    cin>>days;
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
        long long pages=0, count=1;
        for(int i=0;i<n;i++){
            pages += arr[i];
            if(pages>mid){
                count++;
                pages = arr[i];
            }
        } 
        if(count<=days)
        {
            ans = mid;
            end = mid-1;
        }
        else
        start = mid+1;
    }
    cout<<ans;

}