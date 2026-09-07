#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans(-1,-1);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    ans[0]=(i);
                    ans[1]=(j);
                }
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