#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter array size : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    set<int> st;
    for(int i=0;i<n;i++){
         st.insert(arr[i]);
    }

    int x=0;
    for(auto it:st){
        arr[x]=it;
        x++;
    }

    cout<<"The array inplace is : "<<endl;
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}