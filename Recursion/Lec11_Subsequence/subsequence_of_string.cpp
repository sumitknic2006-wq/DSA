#include<iostream>
using namespace std;

void subseq(string &str, int index, int n, vector<string>&ans , string temp)
{
    if(index == n)
    {
        ans.push_back(temp);
        return;
    }
    // Not included
    subseq(str, index+1, n, ans, temp);
    // Included
    temp.push_back(str[index]);
    subseq(str,index+1,n,ans,temp);
}

int main(){
    string str = "abc";
    vector<string> ans;
    string temp;
    subseq(str,0,3,ans,temp);
    for(int i = 0; i<ans.size(); i++){
        for(int j = 0; j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}