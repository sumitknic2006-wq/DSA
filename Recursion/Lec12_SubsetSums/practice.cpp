#include<iostream>
using namespace std;

/*
2: Given an array of size N, Print subset sum and corresponding to it, print the given subset also.
Ex: arr[1,2]
output:
Sum Subset
1        1
2        2
3       1 2
*/

void print(int arr[], int index, int n , int sum,vector<int> &temp)
{
    if(index == n)
    {
       cout<<sum<<" ";
       for(int x:temp){
        cout<<x<<" ";
       }
       cout<<endl;
       return;
    }
    // Not included
    print(arr,index+1,n,sum,temp);

    // Included
    temp.push_back(arr[index]);
    print(arr,index+1,n,sum+arr[index],temp);
    temp.pop_back();
}

int main(){
    int arr[] = {1,2};
    vector<int> temp;
    int sum = 0;
    print(arr,0,2,sum,temp);
}