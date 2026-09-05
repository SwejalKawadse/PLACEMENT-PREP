#include<bits/stdc++.h>
using namespace std;


int MissingNumber(vector<int> &nums){
           int n=nums.size();
        //    barabar n tak run hoga kyoki array me ek element n se kam hai.
           for(int i=1;i<=n+1;i++){
            int flag=0;
            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    flag=1;
                    break;
                }
            }
            if(flag==0) return i;
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