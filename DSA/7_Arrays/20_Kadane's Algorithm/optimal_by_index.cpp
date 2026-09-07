#include<bits/stdc++.h>
using namespace std;

pair<int,int> maxSubArray(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        long long ans=LLONG_MIN;
        int start_ind=-1;
        int end_ind=-1;

        for(int i=0;i<n;i++){
            int start;
            if(sum==0){
                start=i;
            }
            sum+=nums[i];
            if(sum>ans){
                start_ind=start;
                end_ind=i;
                ans=sum;
            }
            if(sum<0){
                sum=0;
            }

        }
         return {start_ind,end_ind};
        
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

   cout<<"The maximum subarray sum's index range is : ";
   auto it=maxSubArray(nums);
   cout<<"( "<<it.first<<" , "<<it.second<<" )"<<endl;
   
return 0;
}