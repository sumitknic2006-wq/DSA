#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/* Smallest Element: Find and print the smallest element in the 2D arrays. */

void smallestElement(int matrix[][4], int row, int col)
{
    int ans = INT_MAX;

    for(int i=0;i<4;i++){
        for(int j = 0;j<4;j++){
            // Minimum
            if(matrix[i][j]<ans){
                ans = matrix[i][j];
            }
        }
    }
    cout<<ans;
}

int main(){

    int arr[4][4] = {23,45,11,29,89,56,45,90,56,87,3,5,16,34,67,12};

    smallestElement(arr,4,4);

}