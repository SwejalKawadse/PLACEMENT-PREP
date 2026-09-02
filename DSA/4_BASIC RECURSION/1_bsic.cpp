#include<bits/stdc++.h>
using namespace std;

void Print_Something(int n){
    if(n==0) return;
    cout<<"All is Well "<<endl;
    Print_Something(n-1);
}

int main() {
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    Print_Something(n);
return 0;
}