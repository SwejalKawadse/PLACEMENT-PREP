#include<bits/stdc++.h>
using namespace std;


void Permutations(int ind , vector<int> &nums,set<vector<int>> &ans){
    if(ind==nums.size()){
        ans.insert(nums);
        return;
    }

    for(int i=ind;i<nums.size();i++){
        swap(nums[ind],nums[i]);
        Permutations(ind+1,nums,ans);
        swap(nums[ind],nums[i]);
    }
}


void nextPermutation(vector<int>& nums) {
        set<vector<int>> ans;
        Permutations(0,nums,ans);
        vector<int> curr=nums;
        int flag=0;

        auto it=ans.find(nums);

        // agar ans hai hi nhi permuatation me matlab koi error hai but waise hoga nhi
        if(it==ans.end()){
            return;
        }

        ++it;
        if(it==ans.end()){
             nums=*ans.begin();
        }
        else{
            nums=*it;
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

    nextPermutation(nums);
cout<<"The next permutation is : "<<endl;
for(auto it:nums){
    cout<<it<<" ";
}
cout<<endl;


   
return 0;
}
