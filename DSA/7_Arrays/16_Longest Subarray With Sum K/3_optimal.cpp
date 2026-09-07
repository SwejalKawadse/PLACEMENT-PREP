// only for the zeroes and positives...

#include<bits/stdc++.h>
using namespace std;

int LongestSubarrayWithSumK(vector<int> &nums,int k){
        int n=nums.size();
        int ans=0;
        int sum=0;
        int start=0;
        int end=0;
        while(end<n){
            while(start<=end && sum>k){
                sum-=nums[start];
                start++;
            }
            if(sum==k){
                ans=max(ans,end-start+1);
            }
            end++;
            if(sum<k){
                sum+=nums[end];
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

    int x;
    cout<<"Enter the sum of the subarray : "<<endl;
    cin>>x;

    cout<<"Longest subarray with sum k is of length : "<<LongestSubarrayWithSumK(nums,x);

return 0;
}