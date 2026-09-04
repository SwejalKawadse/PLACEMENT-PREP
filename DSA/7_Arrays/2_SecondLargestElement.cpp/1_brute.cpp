// Basically I will be using the sorting algo to sort the array.
// Will start traversing from back and the element that is not equal to the largest will be my answer.
//  quick sort will be best for the same as it takes O(logN) time and O(1) space. 

#include<bits/stdc++.h>
using namespace std;

int quick_sort(int arr[],int n,int start,int end){
          int pivot=arr[start];
          int i=start;
          int j=end;
          while(i<j){
            while(i<=end && arr[i]<=pivot){
                i++;
            }
            while( j>start && arr[j]>pivot){
                j--;
            }
            if(i<j) swap(arr[i],arr[j]);
          }
           swap(arr[j],arr[start]);
          return j;
}

void quick(int start,int end,int arr[],int n){
    if(start<end){
        int partition=quick_sort(arr,n,start,end);
        quick(start,partition-1,arr,n);
        quick(partition+1,end,arr,n);
    }
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
    cout<<"\nThe array u have entered is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    quick(0,n-1,arr,n);

    int largest=arr[n-1];
    int sec_largest=-1;
    for(int i=n-1;i>=0;i--){
if(arr[i]!=largest){ sec_largest=arr[i];
break;
}
    }
     cout<<"The second largest element in the array is : "<<sec_largest<<endl;
return 0;
}