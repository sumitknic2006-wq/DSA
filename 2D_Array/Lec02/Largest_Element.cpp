#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/* Largest Element: Find and print the largest element in the 2D array. */

void Max2D(int matrix[][4], int row, int col)
{
    int ans = matrix[0][0];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(matrix[i][j]>ans){
                ans = matrix[i][j];
            }
        }
    }
    cout<<ans;
}

int main(){

    int arr[4][4] = {23,45,11,29,89,56,45,90,56,87,3,5,16,34,67,12};
    Max2D(arr,4,4);

}