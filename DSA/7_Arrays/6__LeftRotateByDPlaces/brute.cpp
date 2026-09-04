
#include<bits/stdc++.h>
using namespace std;

void LeftRotateDPlaces(int arr[],int n,int d){

      d=d%n;
      int temp[d];
      for(int i=0;i<d;i++){
        temp[i]=arr[i];
      }
      for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
      }
      for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
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

    int d;
    cout<<"Enter no of times u want to rotate array : "<<endl;
    cin>>d;

    LeftRotateDPlaces(arr,n,d);

    cout<<endl<<"Array after rotation by d places : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}