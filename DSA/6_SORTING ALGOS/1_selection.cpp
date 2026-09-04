#include<bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int> &nums){
int n=nums.size();
for(int i=0;i<n-1;i++){
    int mini=i;
    for(int j=i+1;j<n;j++){
        if(nums[mini]>nums[j]){
             mini=j;
        }
    }
    int temp=nums[mini];
    nums[mini]=nums[i];
    nums[i]=temp;
}
return nums;
}

int main() {
    int n;
    cout<<"Enter size : "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array : "<<endl;
    int arr[n];
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        nums.push_back(arr[i]);
    }
    cout<<"\n The array u have enetered is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    selectionSort(nums);

     cout<<"\n The array after sort is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;


return 0;
}