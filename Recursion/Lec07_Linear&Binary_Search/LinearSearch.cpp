#include<iostream>
using namespace std;

bool linearsearch(int arr[], int X, int index, int N)
{
    // base Case
    if(index == N) 
    return 0;

    if(arr[index]==X)
    return 1;

    return linearsearch(arr,X,index+1,N);
}

int main(){
    int arr[] = {2,3,6,7,1,5};

    int X = 17;
    cout<<linearsearch(arr,X,0,6)<<endl;
}