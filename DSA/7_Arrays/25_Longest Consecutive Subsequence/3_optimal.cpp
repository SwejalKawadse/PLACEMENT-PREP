#include<bits/stdc++.h>
using namespace std;


int longestConsecutive(vector<int>& nums) {
         int count=1;
         int max_count=1;
         unordered_set<int> st;
         for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
         }
         for(auto it:st){
            if(st.find(it-1)==st.end()){
                int x=it;
                count=1;
                while(st.find(x+1)!=st.end()){
                    x=x+1;
                    count++;
                }
                max_count=max(max_count,count);
            }
         }
         return max_count;
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
