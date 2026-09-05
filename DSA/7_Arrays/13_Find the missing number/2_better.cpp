#include<bits/stdc++.h>
using namespace std;


int MissingNumber(vector<int> &nums){
    int n=nums.size();
    vector<int> hash(n+1, 0);
    for(int i=0;i<n-1;i++){
        hash[nums[i]]++;
    }
    for(int i=1;i<=n;i++){
      if(hash[i]==0) return i;
    }
}

int main() {


    // array 1
    int n;
    cout<<"Enter size : "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array 1: "<<endl;
    int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    vector<int> nums;
    cout<<endl<<"Array is : "<<endl;
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
        nums.push_back(arr[i]);
    }
    cout<<endl;

    cout<<"The missing number is : "<<MissingNumber(nums)<<endl;


   
    

return 0;
}