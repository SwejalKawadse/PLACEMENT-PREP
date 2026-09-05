#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums){
    int ans=0;
        for(int i=0;i<nums.size();i++){
             ans^=nums[i];
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

    

return 0;
}