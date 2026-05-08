#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    void spiralMatrix(int matrix[][4], int row, int col)
    {
        int top = 0, bottom = row-1, right = col-1, left = 0;

        while(top<=bottom && left<=right)
        {
            // top

            for(int j = left;j<=right;j++)
            cout<<matrix[top][j]<<" ";
            top++;

            // right
            for(int i = top;i<=bottom;i++)
            cout<<matrix[i][right]<<" ";
            right--;

            // bottom
            if(top<=bottom){
                for(int j = right; j>=left;j--)
                cout<<matrix[bottom][j]<<" ";
                bottom--;
            }

            // left
            if(left<=right){
                for(int i = bottom;i>=top;i--)
                cout<<matrix[i][left]<<" ";
                left++;
            }
        }
    }
int main (){

    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    spiralMatrix(arr,4,4);

}