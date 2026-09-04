
#include<bits/stdc++.h>
using namespace std;

void RightRotate1Place(int arr[],int n){

     int temp=arr[n-1];
     for(int i=n-2;i>=0;i--){
          arr[i+1]=arr[i];
     }
     arr[0]=temp;
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
    
    RightRotate1Place(arr,n);

    cout<<endl<<"Array after rotation by d places : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}