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

    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"\nThe array after sorting is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}


/*  Hame yahape last me sabse bada bubble jana chahiye fir hamara array last se ek index kam ho jayega. aise hi hamara array jo hai wo peeche se sort hote jaata hai basically bade elements lastme aate hai aur chote elements samne aate hai. */