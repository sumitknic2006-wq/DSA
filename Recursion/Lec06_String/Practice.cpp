#include<iostream>
using namespace std;
/*5: Given a String, count the number of consonants in it.
*/

int consonants(string &s , int index)
{
    if(index == -1){
        return 0;
    }
    if(s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u')
    {
        return consonants(s,index-1);
    }

    return consonants(s,index-1)+1;
}


int main(){
    string str = "sumit";
    cout<<consonants(str,4);
    
}