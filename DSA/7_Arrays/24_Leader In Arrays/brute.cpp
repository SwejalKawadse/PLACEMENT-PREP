

#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& nums) {
      int n=nums.size();
      vector<int> leaders;
      for(int i=0;i<n;i++){
        int curr=nums[i];
        int flag=0;
        for(int j=i+1;j<n;j++){
           if(nums[j]>curr){
              flag=1;
              break;
           }
        }
        if(flag==0){
            leaders.push_back(nums[i]);
        }
      }
      return leaders;
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

    nums=leaders(nums);
    cout<<"The leaders of the array are: "<<endl;
    for(auto it:nums){
        cout<<it<<" ";
    }

   
return 0;
}
