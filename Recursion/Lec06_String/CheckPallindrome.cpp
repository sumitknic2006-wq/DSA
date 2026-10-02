#include<iostream>
using namespace std;

int CheckPal(string str,int start , int end)
{
    // Base Case
    if(start>=end)
    {
        return 1;
    }

    // Not matched
    if(str[start]!=str[end])
    {
        return 0;
    }

    // Matched
    return CheckPal(str,start+1,end-1);
}

int main()
{
    // check pallindrome
    string str = "naman";
    cout<<CheckPal(str,0,4);
}