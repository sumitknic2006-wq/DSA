#include<iostream>
#include<vector>
using namespace std;
// Divide array in 2 subarray
    bool divide(vector<int>arr)
    {
        // First Approach
        int maxi = INT_MIN, prefix = 0, total_sum = 0, n=arr.size();
        // Total sum
        for(int i=0;i<n;i++)
        total_sum += arr[i];

        for(int i=0;i<n;i++){
            prefix += arr[i];
           int ans = total_sum - prefix;
           if(ans == prefix)
           return 1;
        }
        return 0;

    }
    int main(){
        int n;
        cout<<"Enter the size of array: ";
        cin>>n;
        vector<int>v(n);
        cout<<"Enter the element of array: ";
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        cout<<divide(v);
    return 0;
    }

    /*
    Second Approach

    int maxi = INT_MIN;
    for(int i=0;i<n-1;i++){
    int sum1 = 0, sum2 = 0;

    for(j=0;j<=i;j++){
    sum1 += arr[j];
    }

    for(int j=i+1;j<n;j++)
    sum2 += arr[j];

    if(sum1 == sum2)
    return 1;
    }
    return 0;
    */
