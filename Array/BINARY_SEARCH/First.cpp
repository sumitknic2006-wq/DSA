#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    // start ,end, mid
    int start=0, end = n-1, mid;
    while(start<=end){
        // Mid ko find karo
        mid = (start+end)/2;
        // arr[mid]==key
        if(arr[mid]==key)
        return mid;
        // arr[mid]<key
        else if(arr[mid]<key)
        start = mid+1;
        // arr[mid]>key
        else
        end=mid-1;
    }
    return -1;
}
int main(){
    // Binary Search:-> binary search lagana hai to agar wo kuch bhi data diya to wo pahele sorted(increasing or decreasing) form hona chahiye.

    int arr[1000];
    int n;
    cout<<"enter the number of element in array:";
    cin>>n;
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enetr the key:";
    cin>>key;

    cout<<BinarySearch(arr,n,key)<<endl;
    return 0;


}