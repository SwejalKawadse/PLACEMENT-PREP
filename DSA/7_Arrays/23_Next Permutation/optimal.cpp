#include<bits/stdc++.h>
using namespace std;


void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int ind=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind=i;
                break;
            }
        }
        if(ind==-1){
            sort(nums.begin(),nums.end());
        }
        else{
            int mini=INT_MAX;
            int index=-1;
            for(int i=n-1;i>ind;i--){
                if(nums[i]<mini && nums[i]>nums[ind]){
                    mini=nums[i];
                    index=i;
                }
            }
            swap(nums[index],nums[ind]);

            sort(nums.begin()+ind+1,nums.end());
        }
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

    nextPermutation(nums);
cout<<"The next permutation is : "<<endl;
for(auto it:nums){
    cout<<it<<" ";
}
cout<<endl;


   
return 0;
}
