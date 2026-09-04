#include<bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> &nums){
         int n=nums.size();
         for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                }
            }
         }
         return nums;
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

    nums=bubbleSort(nums);

     cout<<"\nThe array after sort is : "<<endl;
    for(auto it:nums){
        cout<<it<<" ";
    }
    cout<<endl;

return 0;
}