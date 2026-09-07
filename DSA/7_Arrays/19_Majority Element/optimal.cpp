#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        int n=nums.size();
       int el=0;
       int cnt=0;
       for(int i=0;i<n;i++){
        if(cnt==0){
            cnt++;
            el=nums[i];
        }
        else if(nums[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
       }

       cnt=0;
       for(int i=0;i<n;i++){
           if(nums[i]==el) cnt++;
           if(cnt>(n/2)) return el;
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