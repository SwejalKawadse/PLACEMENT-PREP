

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n=nums.size();
        vector<int> ans(n,0);
        int pos=0;
        int neg=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[neg]=nums[i];
                neg+=2;
            }
            else{
                ans[pos]=nums[i];
                pos+=2;
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

 nums=rearrangeArray(nums);
for(auto it:nums){
    cout<<it<<" ";
}
   
return 0;
}
