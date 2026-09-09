#include<bits/stdc++.h>
using namespace std;


int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int cnt=1;
        int  max_cnt=1;
        int prev=nums[0];
        for(int i=0;i<n;i++){
          if(nums[i]==(prev+1)){
            cnt++;
            max_cnt=max(max_cnt,cnt);
            prev=prev+1;
          }
          if(nums[i]>(prev+1)){
            prev=nums[i];
            cnt=1;
          }
        }
        return max_cnt;
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


    cout<<"The longest consecutive sequence is : "<<longestConsecutive(nums)<<endl;
    

   
return 0;
}
