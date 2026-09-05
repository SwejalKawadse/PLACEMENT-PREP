#include<bits/stdc++.h>
using namespace std;


int MissingNumber(vector<int> &nums){
    int n=nums.size();
    long xor_array=0;
    long xor_num=0;
    for(int i=0;i<n;i++){
         xor_array^=nums[i];
    }
    for(int i=1;i<=(n+1);i++){
        xor_num^=i;
    }

    return (xor_array^xor_num);

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