#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5};
    int * ptr = arr;

    // // print the address of first element or 0 index
    // cout<<arr<<endl;
    // cout<<arr+0<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<ptr<<endl;

    // // print the address of second element or 1 index
    // cout<<arr+1<<endl;
    // cout<<&arr[1]<<endl;

    // Print the value of 0 index
    cout<<arr[2]<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*ptr<<endl;

    // // Saare address ko print kar do

    // for(int i = 0;i<5;i++)
    // {
    //     cout<<arr+i<<endl;
    // }

    // // Print all the value

    // for(int i = 0;i<5;i++)
    // {
    //     cout<<*(arr+i)<<endl;
    // }


    //// Print all the value then throw pointer

    for(int i = 0;i<5;i++)
    {
        cout<<ptr[i]<<" ";
    }

    // print all the address throw pointer
    for(int i = 0;i<5;i++)
    {
        cout<<ptr+i<<endl;
    }

    // Arithmetic Operation ptr++ , ptr-- , ptr = ptr+1

    // // print all the value
    // for(int i = 0;i<5;i++)
    // {
    //     cout<<*ptr<<" ";
    //     ptr++;
    // }


    // Addition

    ptr = ptr+3;
    cout<<*ptr<<endl;

    ptr = ptr-2;
    cout<<*ptr<<endl;

}