#include<iostream>
using namespace std;

    void substract(int A[3][4], int B[3][4], int row, int col)
    {
    int ans[3][4];
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    {
        ans[i][j] = A[i][j]-B[i][j];
    }
    for(int i=0;i<row;i++)
    for(int j=0;j<4;j++)
        cout<<ans[i][j]<<" ";
        cout<<endl;
    }
int main(){
    /*
    Given 2 matrices A and B, Print A-B.
    */

    int A[3][4] = {12,11,23,19,45,28,9,6,5,20,34,67};
    int B[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    substract(A, B, 3, 4);
    

    
}