// sort using quick sort sorting algorithm.

#include<bits/stdc++.h>
using namespace std;


void sort_zeroes_ones_and_ones(vector<int> &nums){
    int n=nums.size();
        int low=0;
        int high=n-1;
        int mid=0;
        while(mid<high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            if(nums[mid]==1){
                mid++;
            }
            if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
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

   sort_zeroes_ones_and_ones(nums);
   cout<<"The sorted array is : "<<endl;
   for(auto it:nums){
    cout<<it<<" ";
   }

return 0;
}