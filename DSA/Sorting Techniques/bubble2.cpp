#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The array u have enetered is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n;i++){
        for(int j=1;j<n-1-i;j++){
            if(arr[j-1]>arr[j]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout<<"\nThe array after sorting is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}