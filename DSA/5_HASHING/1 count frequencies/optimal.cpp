#include<bits/stdc++.h>
using namespace std;

int main() {
     int n;
    cout<<"Enter the array size : "<<endl;
    cin>>n;
    int arr[n];
    //always initialize it using 0 as it contains garbage value. 
    int hash[256]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int q;
    cout<<"Enter no of queries : "<<endl;
    cin>>q;
    while(q--){
            int number;
            cout<<"Enter number : "<<endl;
            cin>>number;
            cout<<"Appears no. of times : "<<hash[number]<<endl;

    }
return 0;
}