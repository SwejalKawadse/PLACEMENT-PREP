#include<bits/stdc++.h>
using namespace std;

void MoveZeroesAtEnd(int arr[],int n){
    int zero=0;
  for(int i=0;i<n;i++){
        if(arr[i]==0){ zero=i;
        break;
        }
  }

  for(int i=zero+1;i<n;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[zero]);
        zero++;
    }
  }

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

    MoveZeroesAtEnd(arr,n);

    cout<<endl<<"Array after moving zeroes at end : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}