#include<iostream>
#include<vector>
using namespace std;
int foursum(vector<int>& arr,int x){
    int n = arr.size();
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            for(int k=j+1;k<n-1;k++){
                for(int l=k+1;l<n;l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l] == x){
                        return 1;
                    }
                }
            }
        }
    }
    return 0;

}
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int x;
    cout<<"enter of target:";
    cin>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<foursum(v,x);

    
}