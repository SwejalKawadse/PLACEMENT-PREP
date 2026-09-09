

#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& nums) {
      int n=nums.size();
      vector<int> leaders;
      int maxi=INT_MIN;
      for(int i=n-1;i>=0;i--){
        if(maxi<nums[i]){
            leaders.push_back(nums[i]);
        }
        maxi=max(maxi,nums[i]);
      }
      reverse(leaders.begin(),leaders.end());
      return leaders;
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

    nums=leaders(nums);
    cout<<"The leaders of the array are: "<<endl;
    for(auto it:nums){
        cout<<it<<" ";
    }
   
return 0;
}
