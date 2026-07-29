#include<iostream>
using namespace std;

int main()
{
    // Find to pallindrome

    string s2 = "naman";

    int start = 0 , end = s2.size()-1;  

    while(start<end)
    {
        if(s2[start]!=s2[end])
        {
            cout<<"Not a Pallindrome";
        }
        start++ , end--;
    }

    cout<<"It is a Pallindrome";
}