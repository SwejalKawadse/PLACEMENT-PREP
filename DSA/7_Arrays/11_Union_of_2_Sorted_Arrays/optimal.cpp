#include<bits/stdc++.h>
using namespace std;


vector<int> UnionOf2SortedArray(vector<int> nums1,vector<int> nums2){

    int n1=nums1.size();
    int n2=nums2.size();
    int i=0,j=0;

    vector<int> ans;

    while(i<n1 && j<n2){
        if(nums1[i]<=nums2[j]){
            if(ans.empty() || ans.back()!=nums1[i]){
                ans.push_back(nums1[i]);
            }
            i++;
        }
        else{
            if(ans.empty() || ans.back()!=nums2[j]){
                ans.push_back(nums2[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(ans.empty() || ans.back()!=nums1[i]){
            ans.push_back(nums1[i]);
        }
        i++;
    }
    while(j<n2){
        if(ans.empty() || ans.back()!=nums2[j]){
            ans.push_back(nums2[j]);
        }
        j++;
    }
    return ans;
}



int main() {


    // array 1
    int n1;
    cout<<"Enter size : "<<endl;
    cin>>n1;
    cout<<"Enter the elements of the array 1: "<<endl;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    vector<int> nums1;
    cout<<endl<<"Array is : "<<endl;
    for(int i=0;i<n1;i++){
        cout<<arr1[i]<<" ";
        nums1.push_back(arr1[i]);
    }
    cout<<endl;

    // array 2
    int n2;
    cout<<"Enter size : "<<endl;
    cin>>n2;
    cout<<"Enter the elements of the array 1: "<<endl;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    cout<<endl<<"Array is : "<<endl;
    vector<int> nums2;
    for(int i=0;i<n2;i++){
        cout<<arr2[i]<<" ";
        nums2.push_back(arr2[i]);
    }
    cout<<endl;


    vector<int> ans;
    // function :- 

    cout<<"The union is : "<<endl;
    ans=UnionOf2SortedArray(nums1,nums2);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
    

return 0;
}