#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cnt++;
                ans=max(ans,cnt);
            }
            else{
                cnt=0;
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

    cout<<"The maximum consecutive ones are : "<<findMaxConsecutiveOnes(nums)<<endl;   

return 0;
}