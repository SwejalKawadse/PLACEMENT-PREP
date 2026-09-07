#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans(2,-1);
    
       sort(nums.begin(),nums.end());
       int start=0;
       int end=n-1;
       while(start<end){
           if(nums[start]+nums[end]>target){
            end--;
           }
           else if(nums[start]+nums[end]<target){
            start++;
           }
           else{
            ans[0]=start;
            ans[1]=end;
            break;
           }
       }
       return ans;
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

   int target;
   cout<<"Enter the target value : "<<endl;
   cin>>target;
   cout<<"The indxes two sum of the given target is : "<<endl;
   vector<int> ans;
   ans=twoSum(nums,target);
   cout<<"{";
   for(auto it:ans){
    cout<<it<<" ";
   }
   cout<<"}"<<endl;

return 0;
}