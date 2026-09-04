#include<bits/stdc++.h>
using namespace std;


bool SortedArrayCheck(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]) return false;
    }
    return true;
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
    
if(SortedArrayCheck(arr,n)){
cout<<"The array is sorted "<<endl;
}else{
    cout<<"Unsorted array : "<<endl;
}


return 0;
}