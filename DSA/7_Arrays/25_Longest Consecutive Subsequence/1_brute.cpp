#include<bits/stdc++.h>
using namespace std;

bool findElement(vector<int> nums,int ele){
    for(int i=0;i<nums.size();i++){
           if(nums[i]==ele){
            return true;
           }
    }
    return false;
}

int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int max_cnt=0;
        int cnt=1;
        for(int i=0;i<n;i++){
            int ele=nums[i];
            cnt=1;
            while((findElement(nums,ele+1))==true){
                cnt++;
                ele=ele+1;
            }
            max_cnt=max(max_cnt,cnt);
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
