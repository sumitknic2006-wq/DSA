#include<iostream>
using namespace std;

void printrowmax(int arr[][4], int row, int col)
{
    int index = -1, sum = INT_MIN;
    for(int i=0;i<row;i++)
    {
        int total = 0;
        for(int j= 0;j<col;j++)
        total += arr[i][j];

        if(total>sum)
        {
            sum=total;
            index = i;
        }
    }
    cout<<index<<" "<<endl<<endl;
}

// Diagonal sum
    void printsumdig(int matrix[][3], int row, int col)
    {
        int first = 0;
        int sec=0;

        //first diagonal
        int i = 0;
        while(i<row)
        {
            first+=matrix[i][i];
            i++;
        } 
        // second diagonal
        i=0 ;
        int j= col-1;
        while(j>=0){
            sec+=matrix[i][j];
            i++,j--;
        }
        cout<<first<<" "<<sec<<" "<<endl<<endl;

    }

    // Reverse each row of matrix
    
    void reverseMatrix(int arr[3][4], int row, int col)
    {

        for(int i=0;i<row;i++){
            int start = 0, end = col-1;
            while(start<=end){
                swap(arr[i][start],arr[i][end]);
                start++, end--;
            }
        }
        // print 
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }



int main()
{
    // create 2d array
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = {0,1,3,4,6,7,10,11,41,18,9,11};
    int ans[3][4];

    // add 2 matrix

    // for(int row=0;row<3;row++)
    // for(int col=0;col<4;col++)
    // {
    //     ans[row][col] = arr1[row][col]+arr2[row][col];
    // }
    // for(int row=0;row<3;row++)
    // for(int col=0;col<4;col++)
    // cout<<ans[row][col]<<" ";

    // print row index with maximum sum
    printrowmax(arr1,3,4) ;

    // Print Diagonal sum
    int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
    printsumdig(matrix,3,3);

    // reverse
    reverseMatrix(arr1, 3, 4);

}
