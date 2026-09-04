#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter size : "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array : "<<endl;
    int arr[n];
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int largest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest) largest=arr[i];
    }
    cout<<"The largest element in the array is : "<<largest<<endl;
return 0;
}