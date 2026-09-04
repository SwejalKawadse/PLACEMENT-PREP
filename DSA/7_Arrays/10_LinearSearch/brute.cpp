#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[],int n,int target){
    int ans=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==target) return i;
    }
    return ans;
}

int main() {

    int n;
    cout<<"Enter size : "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array : "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"Array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int target;
    cout<<"Enter element to search for : "<<endl;
    cin>>target;
    cout<<"The target is present at index : "<<LinearSearch(arr,n,target)<<endl;

return 0;
}