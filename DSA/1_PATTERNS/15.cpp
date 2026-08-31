#include<bits/stdc++.h>
using namespace std;

void func(int n){
    
    for(int i=1;i<=n;i++){
        char ch='A';
         for(int j=1;j<=(n-i+1);j++){
              cout<<char(ch+j-1)<<" ";
         }
         cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    cout<<endl;
    func(n);
return 0;
}