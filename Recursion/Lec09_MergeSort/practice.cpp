#include<iostream>
using namespace std;

// 1: Sort an array in non-increasing order using Merge Sort.

void merge(int arr[],int start,int mid,int end)
{
    vector<int>temp(end-start+1);
    int left = start , right = mid+1,index = 0;

    while(left<=mid && right<=end)
    {
        if(arr[left] >= arr[right])
        {
            temp[index] = arr[left];
            index++ , left++;
        }
        else{
            temp[index] = arr[right];
            index++ , right++;
        }
    }

    // left is not empty
    while(left<=mid)
    {
        temp[index] = arr[left];
        index++,left++;
    }

    // right array is not empty yet
    while(right<=end){
        temp[index] = arr[right];
        index++ , right++;
    }

    // put these value in the array me.

    index = 0;
    while(start<=end){
        arr[start] = temp[index];
        index++ ,start++;
    }

}

void mergesort(int arr[],int start ,int end){

    if(start == end)
    {
        return;
    }

    int mid = start+(end-start)/2;

    // left 
    mergesort(arr,start,mid);
    // right
    mergesort(arr,mid+1,end);

    merge(arr,start,mid,end);

}

int main(){
    int arr[] = {5,9,2,4,8,3,2,0,1};

    mergesort(arr,0,8);

    for(int i = 0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
}