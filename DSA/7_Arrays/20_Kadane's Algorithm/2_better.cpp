//  Maximum subarray sum.
//  O(n*n*n)

#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        long long sum;
        long long ans=LLONG_MIN;

        for(int i=0;i<n;i++){
             sum=0;
             for(int j=i;j<n;j++){
                    sum+=nums[j];
                ans=max(sum,ans);
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

   cout<<"The maximum subarray sum is : "<<maxSubArray(nums);

   
return 0;
}