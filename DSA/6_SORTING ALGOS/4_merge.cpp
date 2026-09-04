#include<bits/stdc++.h>
using namespace std;


void merge(int low,int mid,int high,int arr[],int n){
    int i=low;
    int j=mid+1;
    vector<int> temp;

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

}

void mergeSort(int low,int high,int arr[],int n){
        if(low>=high) return;

        int mid=(low+high)/2;
        mergeSort(low,mid,arr,n);
        mergeSort(mid+1,high,arr,n);
        merge(low,mid,high,arr,n);

}

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
    for(int i=0;i<n;i++){
        nums.push_back(arr[i]);
    }
    cout<<"\nThe array u have enetered is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    mergeSort(0,n-1,arr,n);

     cout<<"\nThe array after sort is : "<<endl;
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;

return 0;
}