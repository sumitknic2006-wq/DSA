#include<iostream>
using namespace std;
int main(){
    

    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int ans[4][4];

    /*
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            ans[j][4-i-1] = arr[i][j];
        }
    }

    // print matrix
    cout<<"rotate matrix:"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    */


    // Transpose
    for(int i = 0;i<4;i++){
        for(int j = i+1;j<4;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    // Reverse -> row-wise
    for(int i = 0;i<4;i++){
        int start = 0 , end = 4-1;

        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }

    // print matrix
    cout<<"rotate matrix:"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}