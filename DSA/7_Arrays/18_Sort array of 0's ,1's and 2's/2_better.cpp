// sort using quick sort sorting algorithm.

#include<bits/stdc++.h>
using namespace std;


void sort_zeroes_ones_and_ones(vector<int> &nums){
    int start=0;
    int zeroes=0;
    int ones=0;
    int twos=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            zeroes++;
        }
        else if(nums[i]==1){
            ones++;
        }
        else{
            twos++;
        }
    }

    int cnt=0;

        while(zeroes){
            nums[cnt]=0;
            zeroes--;
            cnt++;
        }
        while(ones){
            nums[cnt]=1;
            ones--;
            cnt++;
        }
        while(twos){
            nums[cnt]=2;
            twos--;
            cnt++;
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

   sort_zeroes_ones_and_ones(nums);
   cout<<"The sorted array is : "<<endl;
   for(auto it:nums){
    cout<<it<<" ";
   }

return 0;
}