#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElementTwo(vector<int>& nums) {
        vector<int> ans;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            count=0;
            for(int j=0;j<n;j++){
                      if(nums[i]==nums[j]){
                           count++;
                      }
            }
            if(count>(n/3)){
                if(find(ans.begin(),ans.end(),nums[i])==ans.end()) ans.push_back(nums[i]);
            }
        }
        return ans;
    }

int main() {
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    vector<int> nums(n,0);
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        nums[i]=arr[i];
    }

    cout<<"The array u have entered is : "<<endl;
    for(auto it:nums){
        cout<<it<<" ";
    }
    cout<<endl;

    vector<int> ans;
    ans=majorityElementTwo(nums);
    cout<<"The majority elements(i.e. they appear more than n/3 times) are : "<<endl;
    for(auto it:ans){
        cout<<it<<" ";
    }

return 0;
}