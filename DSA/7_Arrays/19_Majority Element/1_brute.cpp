// sort using quick sort sorting algorithm.

#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt;

        for(int i=0;i<n;i++){
            int ele=nums[i];
            cnt=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    cnt++;
                }
            }
            if(cnt>(n/2)) return nums[i];
        }
        return -1;
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

   cout<<"The majority element is : "<<majorityElement(nums);
   
   

   
return 0;
}