#include<bits/stdc++.h>
using namespace std;

int quick_sort(int arr[],int n,int start,int end){
          int pivot=arr[start];
          int i=start;
          int j=end;
          while(i<j){
            while(i<=end && arr[i]<=pivot){
                i++;
            }
            while( j>start && arr[j]>pivot){
                j--;
            }
            if(i<j) swap(arr[i],arr[j]);
          }
           swap(arr[j],arr[start]);
          return j;
}

void quick(int start,int end,int arr[],int n){
    if(start<end){
        int partition=quick_sort(arr,n,start,end);
        quick(start,partition-1,arr,n);
        quick(partition+1,end,arr,n);
    }
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
    cout<<"\nThe array u have entered is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    quick(0,n-1,arr,n);

     cout<<"\nThe array after sort is : "<<endl;
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;

return 0;
}