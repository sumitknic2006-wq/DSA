#include<iostream>
using namespace std;
int main(){
       int n;
       cout<<"Enter the element:";
       cin>>n;
       int M;
       cout<<"number of book allocation:";
       cin>>M;
       int arr[100];
       for(int i=0;i<n;i++){
        cin>>arr[i];
       }
       int start = 0, end=0,mid, ans;
       for(int i=0;i<n;i++){
        start = max(start,arr[i]);
        end += arr[i];
       }
       while(start<=end)
    {
        mid = (start+end)/2;
        int page = 0, count = 1;
        for(int i=0;i<n;i++){
            page += arr[i];
            if(page>mid){
                count++;
                page = arr[i];
            }
        }
        if(count<=M){
            ans = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
        cout<<ans<<endl;
    

}
