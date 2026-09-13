#include<bits/stdc++.h>
using namespace std;

int EachElement(int r,int c){
    int n=r-1;
    int rr=c-1;

    int ans=1;
    for(int i=1;i<=rr;i++){
          ans*=(n-i+1);
          ans/=i;
    }
    return ans;
}

void PrintRow(int n){
    for(int i=1;i<=n;i++){
        cout<<EachElement(n,i)<<" ";
    }
}

int main() {
    int n;
    cout<<"Enter the row that u want to print of Pascal triangle : "<<endl;
    cin>>n;
    PrintRow(n);
return 0;
}