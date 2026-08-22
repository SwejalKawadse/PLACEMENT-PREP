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

    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
              if(arr[j]<arr[mini]) mini=j;
        }
        int temp=arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
    }

    cout<<"\nThe array after sorting is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}

/* selection sort me ham ddo loop lagate hai ek loop to bas iterate karne ke liye first se last second eleemnt tak aur inner loop check karne ke liye ki baki array me us index se chota number koi hai kya milne pe ham usko update karte hai us chote number ke saath har ek step me ye process chalti hai isiliye fir hame finally sorted array milta hai. */