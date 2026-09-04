
#include<bits/stdc++.h>
using namespace std;

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

    // left rotate by 1 place.
    int temp=arr[0];
    for(int i=0;i<=n-2;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;

    cout<<endl<<"Array after left rotation by 1 place : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}