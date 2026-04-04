#include<iostream>
#include<vector>
using namespace std;
// max difference between 2 element 

    int maxDiff(vector<int>arr)
    {
        int ans = INT_MIN, n = arr.size();
        for(int i=0; i<n-1;i++)
        {
            for(int j=i+1;j<n;j++){
                ans = max(ans,arr[j]-arr[i]);
            }
        }
        return ans;
    }
    int main()
    {
        int n;
        cout<<"Enetr the size of element:";
        cin>>n;
        vector<int>v(n);
        cout<<"Enetr the element of array:";
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        cout<<maxDiff(v);
        return 0;
    }