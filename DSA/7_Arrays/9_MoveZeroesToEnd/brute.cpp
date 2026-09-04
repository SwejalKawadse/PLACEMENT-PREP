#include<bits/stdc++.h>
using namespace std;

void MoveZeroesAtEnd(int arr[],int n){
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    int x=0;
    for(auto it:temp){
        arr[x]=it;
        x++;
    }
    for(int i=x;i<n;i++){
        arr[i]=0;
    }

}


int main() {
    int n;
    cout<<"Enter size : "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array : "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"Array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    MoveZeroesAtEnd(arr,n);

    cout<<endl<<"Array after rotation by d places : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}