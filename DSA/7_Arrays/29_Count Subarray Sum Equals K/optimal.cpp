#include<bits/stdc++.h>
using namespace std;

 int subarraySum(vector<int> &nums, int k){
int n=nums.size();
// sum , count
map<int, int> mpp;

int sum=0;
int total_count=0;
mpp[sum]++;
for(int i=0;i<n;i++){
    sum+=nums[i];
    int remaining=sum-k;
    if(mpp.find(remaining)!=mpp.end()){
        total_count+=mpp[remaining];
    }
    mpp[sum]++;
}
return total_count;
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