#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // // Create 2D vector
    
    // vector<vector<int> >matrix(3,vector<int>(4,1));

    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<4;j++)
    //     cout<<matrix[i][j]<<" ";
    // }

    // // find row

    // cout<<"Rows = "<<matrix.size()<<endl;

    // // find columns

    // cout<<"Columns = "<<matrix[0].size()<<endl;

    /* ============= User Input ==============*/

    int n,m;
    cout<<"Enter row and col:";
    cin>>n>>m;
    vector<vector<int> >matrix(n,vector<int>(m,1));

    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>matrix[i][j];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout<<matrix[i][j]<<" ";
        cout<<endl;
    }

}
