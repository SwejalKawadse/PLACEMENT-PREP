

#include<bits/stdc++.h>
using namespace std;

int stockBuySell(vector<int> &arr, int n){
        int max_profit=INT_MIN;
        int profit=INT_MIN;
        int mini=arr[0];
        for(int i=0;i<n;i++){
            profit=arr[i]-mini;
            max_profit=max(max_profit,profit);
            mini=min(mini,arr[i]);
        }
        return max_profit;
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

   cout<<"The maximum profit in the stocks is : "<<stockBuySell(nums,n);

   
return 0;
}