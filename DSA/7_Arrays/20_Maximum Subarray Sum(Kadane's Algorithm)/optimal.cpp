#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        long long ans=LLONG_MIN;

        for(int i=0;i<n;i++){
            sum+=nums[i];
            ans=max(ans,sum);
            if(sum<0){
                sum=0;
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