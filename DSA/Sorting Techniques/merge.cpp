#include<bits/stdc++.h>
using namespace std;

void merge(int low,int mid,int high,int arr[],int n){
    vector<int> temp;
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
             temp.push_back(arr[i]);
             i++;
    }
    else{
        temp.push_back(arr[j]);
        j++;
    }
}
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=high){
        temp.push_back(arr[j]);
        j++;
    }
    for(int j=0;j<temp.size();j++){
        arr[low+j]=temp[j];
    }
    return;
}

void merge_sort(int low,int high,int arr[],int n){
    if(low>=high) return;

    int mid=(low+high)/2;
    merge_sort(low,mid,arr,n);
    merge_sort(mid+1,high,arr,n);
    merge(low,mid,high,arr,n);
}

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

    merge_sort(0,n-1,arr,n);

    cout<<"\nThe array after sorting is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}