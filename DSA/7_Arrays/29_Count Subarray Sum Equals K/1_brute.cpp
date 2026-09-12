#include<bits/stdc++.h>
using namespace std;

 int subarraySum(vector<int> &nums, int k){
        int sum;
        int n=nums.size();
        int count=0;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                sum=0;
                for(int x=i;x<=j;x++){
                    sum+=nums[x];
                }
                if(sum==k){
                    count++;
                }
            }
        }
        return count;

 }


int main() {
    int n;
    cout<<"Enter size : "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array : "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> nums;
    for(int i=0;i<n;i++){
         nums.push_back(arr[i]);
    }
    cout<<endl<<"Elements of array are : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int k;
    cout<<"Enter the value of k(subarray sum) : "<<endl;
    cin>>k;
    
    cout<<"The number of subarrays with the sum k is : "<<subarraySum(nums,k)<<endl;

return 0;
}