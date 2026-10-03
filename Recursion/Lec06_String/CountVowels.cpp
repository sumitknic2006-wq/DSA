#include<iostream>
using namespace std;

int Count(string str,int index)
{
    if(index == -1)
    return 0;
    
    // Vowels hoga
    if(str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u' )
    {
        return 1+Count(str,index-1);
    }

    else{
        return Count(str,index-1);
    }

}

int main()
{
    // count vowels
    string str = "sumit";
    cout<<Count(str,4);
}