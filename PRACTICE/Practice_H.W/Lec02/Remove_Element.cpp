#include<iostream>
using namespace std;
int main(){
    
    int nums[] = {3,2,2,3};
    int val = 3;

    int start = 0 , end = 3;

    while(start<=end){
        if(nums[start] == val){
            nums[start] = nums[end];
            end--;
        }else{
        start++;
        }
    }
    cout<<start;
}
