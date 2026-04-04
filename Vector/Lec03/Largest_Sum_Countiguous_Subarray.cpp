#include<iostream>
#include<vector>
using namespace std;
// Largest sum of contiguous subarray
    int largestSum(vector<int>arr)
    {
        int maxi = INT_MIN, n = arr.size();
        for(int i=0;i<n;i++){
            int prefix = 0;
            for(int j=i;j<n;j++){
                prefix += arr[j];
                maxi = max(maxi,prefix);
            }
        }
        return maxi;
    }
    int main(){
        int n;
        cout<<"Enter the element of size:";
        cin>>n;
        vector<int>v(n);
        cout<<"Enetr the element of array:";
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        cout<<largestSum(v);

        return 0;
    }

    /*
    Second Approach :- Kandane's Algorithm
    
    int maxi = INT_MIN, prefix = 0;
    for(int i=0;i<n;i++){
    prefix += arr[i];
    maxi = max(maxi,prefix);

    if(prefix<0)
    prefix = 0;
    }

    return maxi;


    */