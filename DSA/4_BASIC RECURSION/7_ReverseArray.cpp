#include<bits/stdc++.h>
using namespace std;

void reverseArray(int i,int arr[],int n){
    if(i>(n/2)) return;

      swap(arr[i],arr[n]);
     reverseArray(i+1,arr,n-1);
}

int main() {
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The array u have eneterd is : "<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverseArray(0,arr,n-1);
    
    cout<<"After reversing the array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}