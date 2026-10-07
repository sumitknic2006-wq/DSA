#include<iostream> 
using namespace std;

// // 1: Given an array in non-increasing order, an element is given X, find if that element is present in the array or not. print 1 if its present else print 0.
// bool findElement(int arr[] , int index, int N , int x)
// {
//     if(index == N){
//         return 0;
//     }
//     if(arr[index] == x ){
//         return 1;
//     }

//     return findElement(arr,index+1,N,x);
    
// }
// int main()
// {
//     int arr[] = {5,4,3,2,2,1};
//     int x = 4;

//     cout<<findElement(arr,0,6,x);
// }


/**
 * 2: Write a recursive function to reverse the elements of an array.
 */

void reverse(int arr[], int start , int end)
{
    if(start>end){
        return;
    }

    if(start<end)
    {
        swap(arr[start] , arr[end]);
    }

    reverse(arr,start+1,end-1);
}

int main(){
    int arr[] = {1,3,4,2,6};

    reverse(arr,0,4);
   
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}