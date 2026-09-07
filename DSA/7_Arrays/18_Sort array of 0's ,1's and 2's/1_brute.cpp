// sort using quick sort sorting algorithm.

#include<bits/stdc++.h>
using namespace std;


int sortt(int start,int end,vector<int> &nums){
    int pivot=nums[start];
    int low=start;
    int high=end;
    while(low<high){
            while(low<=end && nums[low]<=pivot){
                         low++;
            }
            while(high>start && nums[high]>pivot){
                high--;
            }
            if(low<high){
            swap(nums[low],nums[high]);
            }
    }
    swap(nums[start],nums[high]);
    return high;
}


void quick_sort(int start,int end,vector<int> &nums){

          if(start<end){
            int partition=sortt(start,end,nums);
            quick_sort(start,partition-1,nums);
            quick_sort(partition+1,end,nums);     
        }
}

int main() {


    // array 1
    int n;
    cout<<"Enter size : "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array 1: "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> nums;
    cout<<endl<<"Array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        nums.push_back(arr[i]);
    }
    cout<<endl;

   quick_sort(0,n-1,nums);

   cout<<"The sorted array is : "<<endl;
   for(auto it:nums){
    cout<<it<<" ";
   }

return 0;
}