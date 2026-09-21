#include<iostream>
using namespace std;
int main()
{

    // /* 1: Print the address of the first index of the char array in c++. */
    // char arr[5] = "1234";

    // char *ptr = arr;

    // cout<<arr<<endl;
    // cout<<(void*)ptr<<endl;
    // cout<<(void*)arr<<endl;
    // cout<<(void*)(arr+0)<<endl;
    // cout<<(void*)&arr[0]<<endl;


    // /* 2: Print the address of the char variable in c++. */

    // char arr[5] = "1234";

    // for(int i = 0;i<5;i++)
    // {
    //     cout<<(void*)&arr[i]<<endl;
    // }

    // /* 3: Print the address of String in c++. */

    // string name = "Sumit";

    // cout<<(void*)&name[0]<<endl;
    // cout<<(void*)&name[1]<<endl;

    

    /* 5: int arr[5] = {1,2,3,4,5};
    Create a pointer which will store the address of the last element. Then print all the elements from the last index to 0th index with the help of a pointer.
    */
    int arr[5] = {1,2,3,4,5};

    int *ptr = &arr[4];

    for(int i = 4;i>=0;i--)
    {
        cout<<*ptr<<" ";
        ptr--;
    }



}