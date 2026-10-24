#include<iostream>
using namespace std;

void print(int arr[] , int index, int n , int sum, vector<int>&ans)
{
    // base case
    if(n == index){
       ans.push_back(sum);
        return;
    }
    // Not included
    print(arr,index+1,n,sum,ans);
    // Included
    print(arr,index+1,n,sum+arr[index],ans);
}

int main(){
    int arr[] = {1,2,3,4};
    vector<int>ans;
    int sum = 0;
    print(arr,0,4,sum,ans);
    
    // print
    for(int i = 0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}