#include<iostream>
using namespace std;

int print(int arr[], int index,  int n, int sum)
{
    if(index == n ){
       return (sum == 0) ? 1 : 0;
    }
    if(sum<0){
        return 0;
    }
    // not included
    int var1 = print(arr,index+1,n,sum);

    // included
    int var2 = print(arr,index+1,n,sum-arr[index]);

    return var1+var2;
}

int main(){
    int arr[] = {5,2,3,6,10,8};
    int sum = 10;
    int count = 0;
    cout<<print(arr,0,6,sum)<<endl;
}