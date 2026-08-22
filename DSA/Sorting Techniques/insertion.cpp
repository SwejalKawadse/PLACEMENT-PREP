#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The array u have enetered is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    for(int i=1;i<n;i++){
        int  j=i;
       while(j>0 && arr[j-1]>arr[j])
       {
           swap(arr[j-1],arr[j]);
           j--;
       }
       
    }

    cout<<"\nThe array after sorting is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}

/* To basically ham kya kar rhe hai isme ham index 1 se start karege aur last tak jayege aur usme har ek index jahape ham present hai wahase ek loop lagayege aur peechla elementchecek karege ki wo current element se bada hai ki nhi agar bada hai to swap karege aur the moment hame bada nhi milega matlab wo element uske apne barabr position pe pohoch chuka rahega. */