#include<iostream>
#include<vector>
using namespace std;
int main(){
    //    create vector, declare
    // vector<int>v;
    // vector<int>v1(5,1);
    // // size and capacity
    // cout<<"Size of v:"<<v.size()<<endl;
    // cout<<"Capacity of v: "<<v.capacity()<<endl; 
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(10);
    // cout<<"Size of v:"<<v.size()<<endl;
    // cout<<"capacity of v: "<<v.capacity()<<endl;

    // // update value
    // v[1]=5;
    // cout<<"size of v1:"<<v1.size()<<endl;
    // cout<<"capacity of v1:"<<v1.capacity()<<endl;
    // v.push_back(8);
    // cout<<"size of v1:"<<v1.size()<<endl;
    // cout<<"Capacity of v1:"<<v1.size()<<endl;

    // // Delete value from vector
    // vector<int>vnew;
    // vnew.push_back(4);
    // vnew.push_back(7);
    // vnew.push_back(1);
    // vnew.push_back(5);
    // vnew.push_back(8);
    // vnew.pop_back();
    // cout<<"size of vnew:"<<vnew.size()<<endl;
    // cout<<"Capacity of vnew:"<<vnew.capacity()<<endl;

    // // paticle element ko hatana hai to erase use karo
    // vnew.erase(vnew.begin()+1);
    // cout<<"size of vnew:"<<vnew.size()<<endl;
    // cout<<"Capacity of vnew:"<<vnew.capacity()<<endl;
    // // print
    // for(int i=0;i<vnew.size();i++){
    //     cout<<vnew[i]<<" ";
    // }
    // vnew.insert(vnew.begin()+1,50); //insert value
    // cout<<endl;

    // vnew[1]=37;
    // for(int i=0;i<vnew.size();i++)
    // cout<<vnew[i]<<" ";
    // cout<<endl;
    // vnew.clear(); //remove all the element
    // cout<<"Size of renew:"<<vnew.size()<<endl;
    // cout<<"Capacity of vnew:"<<vnew.capacity()<<endl;

    // vector<int>arr;
    // arr.push_back(2);
    // arr.push_back(12);
    // arr.push_back(38);
    // arr.push_back(248);
    // cout<<arr[0]<<endl;
    // cout<<arr.front()<<endl;
    // cout<<arr[arr.size()-1]<<endl;
    // cout<<arr.back()<<endl;

    // vector<int>a;
    // // Copy value of 1 vector to another
    // a=arr;
    // cout<<a.size();
    // cout<<endl;
    // for(auto it = arr.begin();it!=arr.end();it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // // or
    // for(auto i:arr)
    // cout<<i<<" ";

    vector<int>ans;
    ans.push_back(5);
    ans.push_back(234);
    ans.push_back(78);
    ans.push_back(512);
    ans.push_back(51);

    // sort in increasing order
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;
    // sort in decreasing order
    // sort(ans.begin(),ans.end(),greater<int>());
    // for(int i=0;i<ans.size();i++)
    // cout<<ans[i]<<" ";
    // cout<<endl;
    // // or
    // sort(ans.rbegin(),ans.rend());
    // for(int i=0;i<ans.size();i++)
    // cout<<ans[i]<<" ";

    // search in binary search
    cout<<binary_search(ans.begin(),ans.end(),54)<<endl; //persent->yes->1, No->0

    // find particular index in binary search
    cout<<find(ans.begin(),ans.end(),54)-ans.begin()<<endl;





}