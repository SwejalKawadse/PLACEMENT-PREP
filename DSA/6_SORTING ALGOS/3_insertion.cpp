#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> &nums){
         int n=nums.size();
         for(int i=1;i<n;i++){
            int ele=nums[i];
            int j=i;
             while(j>0 && nums[j-1]>ele){
               nums[j]=nums[j-1];
               j--;
         }
         nums[j]=ele;
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

    nums=insertionSort(nums);

     cout<<"\nThe array after sort is : "<<endl;
    for(auto it:nums){
        cout<<it<<" ";
    }
    cout<<endl;

return 0;
}