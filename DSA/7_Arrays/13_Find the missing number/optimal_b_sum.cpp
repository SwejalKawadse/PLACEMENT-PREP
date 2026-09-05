#include<bits/stdc++.h>
using namespace std;


int MissingNumber(vector<int> &nums){
int n=nums.size();
long long sum_array=0;
for(int i=0;i<n;i++){
    sum_array+=nums[i];
}
// yahape n matlab n+1 hai kyoki array ke size me ek number missing hai..
long long sum_n=((n+1)*(n+2))/2;
return (sum_n-sum_array);
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