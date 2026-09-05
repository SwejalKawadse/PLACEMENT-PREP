#include<bits/stdc++.h>
using namespace std;

vector<int> Intersection_of_2_sorted_Arrays(vector<int> nums1,vector<int> nums2){
    int n1=nums1.size();
    int n2=nums2.size();

    if(n1<n2) return Intersection_of_2_sorted_Arrays(nums2,nums1);
    else{
          bool visited[n2]={0};
          vector<int> ans;

for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        if(nums1[i]==nums2[j] && visited[j]==0){
                    ans.push_back(nums1[i]);
                    visited[j]=1;
                    break;
        }
    }
}
return ans;
    }

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

    cout<<"The intersection is : "<<endl;

    ans=Intersection_of_2_sorted_Arrays(nums1,nums2);
   
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
    

return 0;
}