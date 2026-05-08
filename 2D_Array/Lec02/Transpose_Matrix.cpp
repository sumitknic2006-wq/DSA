#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Transpose -> transpose matrix means change in row -> col and col->row, no.of row == no.of col

void Transpose(int matrix[][4], int row, int col)
{
    for(int i=0;i<row-1;i++){
        for(int j=i+1;j<col;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}
    
int main(){

    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    Transpose(arr,4,4);

    // print matrix
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}