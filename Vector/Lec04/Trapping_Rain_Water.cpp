#include<iostream>
#include<vector>
using namespace std;
// find total unit water store
int totalWater(vector<int>& height){
    int n=height.size();
    int leftmax = 0,rightmax = 0, index=0, water = 0;
   int maxheight =height[0];
//    maxheight building
for(int i=1;i<n;i++){
    if(height[i]>maxheight){
        maxheight = height[i];
        index = i;
    }
}
// left part
for(int i=0;i<index;i++){
    if(leftmax>height[i]){
        water += leftmax-height[i];
    }
    else{
        leftmax = height[i];
    }
}
// right part
for(int i = n-1;i>0;i--){
    if(rightmax>height[i]){
        water += rightmax-height[i];
    }
}
return water;

// T.C = o(n), S.C = o(1)

/*
    int n = height.size();
    leftmax[n],rightmax[n], leftmax = 0;

    // leftmax
    for(int i=1;i<n;i++){
    leftmax[i] = max(leftmax[i-1],height[i-1]);
    }

    // rightmax
    rightmax[n-1] = 0;
    for(int i=n-2;i>=0;i--){
    right[i] = max(rightmax[i+1],height[i+1]);
    }

    // water store
    int water = 0;
    for(int i=0;i<n;i++){
    int minheight = min(leftmax[i],rightmax[i]);
    if(miniheight-height[i]>0)
    water += miniheight-height[i];
    }
    return water;

    // Time Complexity = o(n), space complexity = o(n)

 */

}
int main(){
    int n;
    cout<<"enter element of array:";
    cin>>n;
    vector<int>v(n);
    cout<<"Height of element of water:";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<totalWater(v);
   
}