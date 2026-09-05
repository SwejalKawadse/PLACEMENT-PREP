#include<bits/stdc++.h>
using namespace std;

int LongestSubarrayWithSumK(vector<int> &nums,int x){
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum=0;
                for(int k=i;k<=j;k++){
                    sum+=nums[k];
                }
                if(sum==x){
                    ans=max(ans,(j-i+1));
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

    int x;
    cout<<"Enter the sum of the subarray : "<<endl;
    cin>>x;

    cout<<"Longest subarray with sum k is of length : "<<LongestSubarrayWithSumK(nums,x);

return 0;
}