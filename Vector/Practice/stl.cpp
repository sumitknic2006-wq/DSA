#include<iostream>
#include<vector>
using namespace std;
// int main(){
    // 1.Prove that the average time Complexity of Push_back operation in Vector is O(1) time.
    // vector<int>v;
    // v.push_back(34);
    // v.push_back(67);
    // v.push_back(13);
    // v.push_back(13);
    // v.push_back(90);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // 2.How to find the number of Occurance(occurance means kisi value kitna bar aana) of an element in a vector. You need to use STL here.
    // int target;
    // cin>>target;
    // int count=0;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==target){
    //     count++;
    //     }
    // }
        // cout<<count;
        // or
        // int target;
        // cin>>target;
        // int occ = count(v.begin(),v.end(),target); //target->us array me ye element kitna hai.
        // cout<<occ<<endl;

    // How to find maximum and minimum elements from the vector. USE STL here.
        // // maximum
        // int max_val = *max_element(v.begin(),v.end()); //*->max_element ka address batata hai
        // cout<<max_val<<endl;
        // // minimum
        // int min_val = *min_element(v.begin(),v.end());
        // cout<<min_val<<endl;

    // Find Lower bound and Upper Bound of a given element in a sorted vector. USE STL here to find them.
        // vector<int> v = {1, 2, 2, 2, 3, 4, 5};

        // int x = 2;

        // auto lb = lower_bound(v.begin(), v.end(), x);
        // auto ub = upper_bound(v.begin(), v.end(), x);

        // cout << "Lower Bound index = " << lb - v.begin() << endl;
        // cout << "Upper Bound index = " << ub - v.begin() << endl;

    // How to pass a vector to a function. Write a small code for it.
    void printVector(vector<int> &v){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }
        int main(){
            vector<int>v = {20,30,40,60,80};
            printVector(v);
        
   
   

        return 0;
        





    



}