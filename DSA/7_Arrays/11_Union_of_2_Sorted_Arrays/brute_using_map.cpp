#include<bits/stdc++.h>
using namespace std;

map<int,int> union_of_2_arrays(int arr1[],int n1,int arr2[],int n2){
    map<int,int> mpp;

    for(int i=0;i<n1;i++){
        mpp[arr1[i]]++;
    }
    for(int i=0;i<n2;i++){
       mpp[arr2[i]]++;
    }
    return mpp;

}


int main() {

    int n1;
    cout<<"Enter size 1: "<<endl;
    cin>>n1;
    cout<<"Enter the elements of the array 1: "<<endl;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<endl<<"Array is : "<<endl;
    for(int i=0;i<n1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    int n2;
    cout<<"Enter size 2: "<<endl;
    cin>>n2;
    cout<<"Enter the elements of the array 2: "<<endl;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    cout<<endl<<"Array is : "<<endl;
    for(int i=0;i<n2;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    map<int,int> mpp;
    cout<<"The union is : "<<endl;
    mpp= union_of_2_arrays(arr1,n1,arr2,n2);
    for(auto it: mpp){
        cout<<it.first<<" ";
    }
    cout<<endl;
    

return 0;
}