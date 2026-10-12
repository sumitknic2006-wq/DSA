#include <iostream>
using namespace std;

// Given an array of size n, print all the sums possible from its subsequence.
void subseq(int arr[], int index, int n, vector<vector<int>>&ans , vector<int> temp, int sum)
{
    if(index == n)
    {
        temp.push_back(sum);
        ans.push_back(temp);
        return;
    }
    // Not included
    subseq(arr, index+1, n, ans, temp,sum);
    // Included
    sum += arr[index];
    subseq(arr,index+1,n,ans,temp,sum);
}


int main(){
    int arr[] = {1,2};
    int sum = 0;
    vector<vector<int>> ans;
    vector<int> temp;
    subseq(arr,0,2,ans,temp,sum);
    for(int i = 0; i<ans.size(); i++){
        for(int j = 0; j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
