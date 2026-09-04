#include<bits/stdc++.h>
using namespace std;


int ElementOccurence(int x,int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
           count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout<<"Enter the array size : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int q;
    cout<<"enter the no of queries : "<<endl;
    cin>>q;
    while(q--){
        int element;
        cout<<"enter the element to search for : "<<endl;
        cin>>element;
        cout<<"The element appeared : "<<ElementOccurence(element,arr,n)<<endl;
    }
    
return 0;
}