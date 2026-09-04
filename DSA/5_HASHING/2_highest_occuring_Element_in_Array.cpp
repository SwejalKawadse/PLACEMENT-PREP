#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter size : "<<endl;
    cin>>n;
    int arr[n];
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    int count=0;
    int element=-1;
    for(auto it:mpp){
        if(it.second>count){
            count=it.second;
            element=it.first;
        }
    }
    cout<<"The highest occuring element in the array is : "<<element<<endl;
return 0;
}