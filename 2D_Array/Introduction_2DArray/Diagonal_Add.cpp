#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
3: Given a matrix of size n*n, Print sum of diagonal element.
 Ex:    1 2 3
        4 5 6
        7 8 9

Its answer: 1+5+9 , 3+5+7, So the total sum will be 1+5+9+3+5+7 = 30. Here we can see that 5 is included 2 times, so we should include it only 1 time so the final answer will be, 30-5 = 25.  So the final answer will be 25.

*/

void addDiagonal(int matrix[3][3] , int row,int col)
{
    // first diagonal
    int first = 0;
    for(int i = 0;i<row;i++){
        first += matrix[i][i];
    }

    // second diagonal 
    int second = 0;
    int i = 0, j = col-1;
    while(j>=0){
        second += matrix[i][j];
        i++, j--;
    }

    int sum = first+second;

    // Middle remove element -> only sirf odd row
    if(row%2 != 0){
        sum -= matrix[row/2][col/2];
    }

    cout<<sum;

}
int main()
{
    int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
    addDiagonal(matrix,3,3);
    
}
