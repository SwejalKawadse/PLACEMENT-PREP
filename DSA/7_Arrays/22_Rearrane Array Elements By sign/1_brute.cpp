

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n=nums.size();
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<n;i++){
            if(nums[i]<0) neg.push_back(nums[i]);
            else pos.push_back(nums[i]);
        }

        for(int i=0;i<n/2;i++){
            nums[2*i]=pos[i];
            nums[(2*i)+1]=neg[i];
        }
        return nums;
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
