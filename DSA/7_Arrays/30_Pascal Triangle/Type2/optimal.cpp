#include<bits/stdc++.h>
using namespace std;

void PrintRow(int n){
     int row=n;
     cout<<"1 ";
     int ans=1;
     for(int i=1;i<n;i++){
        ans*=(row-i);
        ans/=i;
        cout<<ans<<" ";
     }
}

int main() {
    int n;
    cout<<"Enter the row that u want to print of Pascal triangle : "<<endl;
    cin>>n;
    PrintRow(n);
return 0;
}